#include <bits/stdc++.h>
#define TAM 120
using namespace std;
queue<int>q;
int vis[TAM]={0};
int cor[TAM]={0};

vector<int>g[TAM];

int dfs(int u, int c) {
	cor[u]= 3-c;
	for(int i=0;i<g[u].size();i++) {
		int v=g[u][i];
		if(!cor[v]) {
			if(!dfs(v, 3-c))
				return 0;
		}else if(cor[v]==cor[u])
			return 0;
	}
	return 1;
}

int bipartite(int n) {
	int c=2;
	for(int i=0;i<n;i++)
		cor[i]=0;
	for(int i=0;i<n;i++) {
		if(!cor[i]) {
			if(!dfs(i,c))
				return 0;
		}
	}
	return 1;
}	
int main() {
    int  u, v,c=0,m,n;
    while (scanf("%d %d", &n, &m)!=EOF){

	    for(int i = 0; i < m; i++) {
	        scanf("%d %d", &u, &v);
	        u--;v--;
	        g[u].push_back(v);
	        g[v].push_back(u);
	    }
	    printf("Instancia %d\n",++c);

	    if(bipartite(n)) 
	    	printf("sim\n\n");
	    else 
	    	printf("nao\n\n");

	    for(int i=0;i< n;i++){
	    	g[i].clear();
	    }
	    printf("\n");

	}
    return 0;
}
