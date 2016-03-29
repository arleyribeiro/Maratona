#include <bits/stdc++.h>
#define TAM 450
using namespace std;

map< string, int >names;

int pai[TAM], tam[TAM]; 
 
int find(int n)
{  
    int origin=n, temp=0;
    while(pai[n]!=n)
        n = pai[n];
    while(pai[origin]!=n)
    {
        temp = pai[origin];
        pai[origin]=n;
        origin=temp;
    }
           
    return n;
}
 
void une(int n, int m)
{
    int a, b;
    a = find(n);
    b = find(m);
    
    if(a==b)
        return;
     
    if(tam[a]>=tam[b])
    {
        pai[b] = a;
        tam[a] += tam[b];     
    }else
        {
            pai[a] = b;
            tam[b] += tam[a];     
        }
}
   
void inicializa(int t)
{
    int i;
    for(i=0; i < t; i++)
    {
        tam[i]=1;
        pai[i]=i;
    }
}

typedef struct e
{
    int u, v,peso;
}Edge;
 
//Edge vE[TAM];
vector<Edge>vE;

bool cmp(Edge a, Edge b) {
	return a.peso > b.peso;
}

struct less_than_key
{
    inline bool operator() (const Edge& struct1, const Edge& struct2)
    {
        return (struct1.peso < struct2.peso);
    }
};

int main()
{
	int i,j,c,x,y,z,m,n;
	string s,s2;
	Edge ele;	
	
	while(scanf("%d %d", &n,&m)==2)
	{
		if(n==0 && m==0)
			break;
			
		vE.clear();
		names.clear();
		
		/*mapeando os nomes*/
		for(i=0;i<n;i++)
		{
			cin>>s;
			names[s]=i;		
		}
		
		for(j=0;j < m;j++)
		{
			cin>>s>>s2>>z;
			
			ele.u = names.find(s)->second;
			ele.v = names.find(s2)->second;
			ele.peso = z;
			vE.push_back(ele);
		} 
	
	sort(vE.begin(),vE.end(),less_than_key());
	
	/*kruskal*/
        int custo=0;
        inicializa(TAM);
        for(i=0; i < m; i++)
        {
            if(find(vE[i].u) != find(vE[i].v))
            {
                custo+=vE[i].peso;
                une(vE[i].u, vE[i].v );                     
            }
        }
        
        /*compreessão de caminhos*/ 
        for(i=0; i < n; i++)
        	find(i);
        	
		int flag=1;
		int aux=pai[0];
	
		for(i=1; i<n; i++)
			if(aux!=pai[i]){
				flag=0;
				break;
			}	
		
		if(flag==1)
			printf("%d\n",custo);
		else
			printf("Impossible\n");
		
		cin>>s;
	}
	
	/*
	printf("%d\n",names.find("Picadilly")->second);
	printf("%d\n",names.find("Victoria")->second);
	printf("%d\n",names.find("Queensway")->second);
	*/
	return 0;
}

