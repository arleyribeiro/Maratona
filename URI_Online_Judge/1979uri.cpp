#include <bits/stdc++.h>
#define TAM 5000
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
    int  u, v,c=0,m,n, k,s;
    while (cin>>m,m){
    	for (int i = 0; i < m; ++i) {
    		cin>>n;
    		getchar();
    		n--;
    		string s1,s2;
    		getline(cin, s1);
    		int j=0;
    		for(int i=0;i<s1.size();i++) {
			    j=i;
			    while(s1[i]!=' ' && i<s1.size()) {
			        i++;
			    }
			    s2 = s1.substr(j,(i-j));
			    v=atoi(s2.c_str())-1;
			    g[n].push_back(v);
		        g[v].push_back(n);
			}	        
    		
    	}
		

	    if(bipartite(m)) 
	    	printf("SIM");
	    else 
	    	printf("NAO");

	    for(int i=0;i< m;i++){
	    	g[i].clear();
	    }
	    printf("\n");

	}
    return 0;
}
