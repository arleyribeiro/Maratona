#include <bits/stdc++.h>
#define TAM 200250
using namespace std;
   
typedef struct p
{
    int x,y;
}Ponto;
 
typedef struct e
{
    int peso;
    int u, v;
}Edge;
 
Ponto vP[TAM];
vector<Edge> v;
Edge vE;
int pai[TAM], tam[TAM]; 
 
bool cmp(Edge a, Edge b){
    return a.peso < b.peso;
}
 
int find(int x)
{   
    if(pai[x]!=pai[pai[x]])
        pai[x] = find(pai[x]);
            return pai[x];
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
    for(i=0; i <= t; i++)
    {
        tam[i]=1;
        pai[i]=i;
    }
}


/*preenche vE de pontos*/
void preencePontos(int n)
{
	int i=0;
	int x,y;
    while(n--)
    {
        scanf("%d ", &x);
        scanf("%d ", &y);
        vP[i].x=x;
        vP[i].y=y;
        i++;
    }
}

/*preenche vE de arestas e nomeia os pontos*/
void preencheArestas(int n)
{
	int i,j, x1, y1,d;
    for(i=0; i < n; i++)
    {
        for(j=i+1;j < n;j++)
        {
        	x1=(vP[i].x-vP[j].x);
        	y1=(vP[i].y-vP[j].y);
            d = sqrt((x1*x1) + (y1*y1));
            vE.peso = d;
            vE.u=i;
            vE.v=j;
            v.push_back(vE);
        }       
    }
}

long long kruskal(int n)
{
	long long custo=0;
	int i;
    inicializa(n);
    sort(v.begin(),v.end(),cmp);
    for(i=0; i < v.size(); i++)
    {
        if(find(v[i].u) != find(v[i].v))
        {
            une(v[i].u, v[i].v );
            custo+=v[i].peso;
        }
    }
	return custo;
}
 
int main()
{
    int  i=0, n, m;
    long long total=0;
    
    while(scanf("%d %d", &n,&m)==2)
    {	
    	if(n==0 && m==0)
    		return 0;
    		
		for(i=0; i < m; i++){
			scanf("%d %d %d", &vE.u,&vE.v,&vE.peso);
			total+=vE.peso;
			v.push_back(vE);
		}
   
		/*kruskal*/        
		long long custo = kruskal(n);
		printf("%lld\n",total-custo);
		v.clear();
		total=0;
    }
    return 0;
}


