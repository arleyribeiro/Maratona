#include <bits/stdc++.h>
#define TAM 25500
/*50000 aresta que podem ser formadas n*(n-1)/2*/
using namespace std;

int pai[TAM], tam[TAM];

int find(int x){	
    if(pai[x]!=pai[pai[x]])
    	pai[x] = find(pai[x]);
    		return pai[x];
}

void une(int n, int m){
    int a, b;
    a = find(n);
    b = find(m);
    if(a==b)
    	return;
    
    if(tam[a]>=tam[b])    {
        pai[b] = a;
        tam[a] += tam[b];      
    }else{
        pai[a] = b;
        tam[b] += tam[a];      
    } 
}
  
void inicializa(int t){
    for(int i=0; i <= t; i++) {
        tam[i]=0;
        pai[i]=i;
    }
}

typedef struct e{
	int u, v,peso;
}Edge;

vector<Edge> v;
vector<int>ps;

bool cmp(Edge a, Edge b){
	return a.peso < b.peso;
}
long long kruskal(int n, int m) {

	sort(v.begin(),v.end(),cmp);
	long long custo=0;
	inicializa(n);
	for(int i=0; i < m; i++){
		if(find(v[i].u) != find(v[i].v)){
			custo+=v[i].peso;
			une(v[i].u, v[i].v );					
		}
	}
	return custo;
}
int main()
{
	int  i=0, n,m;
	Edge vE;
	while(scanf("%d %d", &n,&m)==2)
	{	
		if(n==0 && m==0)
			return 0;
		/*preenche vE de arestas e nomeia os pontos*/
		for(i=0; i < m; i++){
			scanf("%d %d %d", &vE.u,&vE.v,&vE.peso);
			v.push_back(vE);
		}
		sort(v.begin(),v.end(),cmp);		
		/*kruskal*/
		long long custo=0;
		inicializa(n);
		for(i=0; i < m; i++){
			if(find(v[i].u) != find(v[i].v)){
				custo+=v[i].peso;
				une(v[i].u, v[i].v );				
			}else
				ps.push_back(v[i].peso);
		}
		if(ps.size()==0)
			printf("forest\n");
		else{
		printf("%d",ps[0]);
		for(i=1;i<ps.size();i++)
			printf(" %d",ps[i]);
			
		printf("\n");
		}
		v.clear();
		ps.clear();
	}
	return 0;
}
