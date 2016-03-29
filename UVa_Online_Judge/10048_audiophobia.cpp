#include <bits/stdc++.h>
#define TAM 10000
#define INF 0x3f3f3f3f
using namespace std;
int graph[TAM][TAM];

void floyd_warshall(int n)
{
	for(int k = 0; k <= n; ++k)
		for(int i = 0; i <= n; ++i)
			for(int j = 0; j <= n; ++j)
				graph[i][j] = min(graph[i][j], max(graph[i][k], graph[k][j]));

}

void inic(int n)
{
	for(int i=0;i<=n;i++)
		for(int j=0;j<=n;j++)
			if(i==j)
				graph[i][j]=0;
			else
				graph[i][j]=INF;
}
int main()
{
	int n, m, p,x,y,z,t=1,f=0;
	while(scanf("%d %d %d", &n,&m,&p)==3)
	{
		if(n==0 && m==0 && p==0)
			return 0;
			
		if(f++)
			printf("\n");
			
		inic(n);
		
		for(int i=0;i<m;i++)
		{
			scanf("%d %d %d", &x,&y,&z);
			graph[x][y]=z;
			graph[y][x]=z;	
		}
		floyd_warshall(n);
		
		printf("Case #%d\n",t++);
		
		while(p--)
		{
			scanf("%d %d", &x,&y);
			if(graph[x][y]!=INF)
				printf("%d\n", graph[x][y]);
			else
				printf("no path\n");
		}
	}

	return 0;
}
