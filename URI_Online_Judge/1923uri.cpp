#include <bits/stdc++.h>
#define TAM 1010
using namespace std;

queue<int>q;
int d[TAM]={0};
int cor[TAM]={0};
int p[TAM]={0};
/*
white 0
gray 1
black 2
*/
vector<int>g[TAM];

void bfs(int s) {
	cor[s]=1;
	d[s]=0;
	p[s]=s;
	q.push(s);

	while(!q.empty()) {
		int u = q.front();
		q.pop(); 
		for(int i=0; i< g[u].size();i++) {
			int v=g[u][i];
			if( cor[ v ] == 0) {
				cor[v]=1;
				d[v]=d[u]+1;
				p[v]=u;
				q.push(v);
			}
		}
		cor[u]=2;
	}

}

int main () {

	int g1,n,i=0,c=0,t=0;
	map<string,int>smi;
	map<int,string>ims;
	set<string>cv;
	set<string>::iterator it;
	string s,s1,s2="Rerisson";
	scanf("%d %d ",&n,&g1);
	while(n--) {
		cin>>s>>s1;
		if(!smi.count(s)) {
			smi[s]=i;
			ims[i]=s;
			i++;
			c++;
		}

		if(!smi.count(s1)) {
			smi[s1]=i;
			ims[i]=s1;
			i++;
			c++;			
		}
		
		int u=smi[ s ];
		int v=smi[ s1 ];
		g[u].push_back(v);
		g[v].push_back(u);
	}

	bfs(smi[s2]);

	for(int i=0;i<c;i++) {
		if(d[i] <= g1 && d[i]>0) {
			cv.insert(ims[i]);
			t++;
		}
	}
	printf("%d\n", t);
	for(it=cv.begin();it!=cv.end();it++)
		cout<< *it <<endl;
	
	return 0;
}