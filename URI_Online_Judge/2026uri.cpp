#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
#define TAM 51
using namespace std;

int v[TAM];
int p[TAM];
int m[TAM][TAM];

int pd(int n, int l)
{
	for(int i=0;i<=l;i++)
		m[0][i]=0;
		
	for(int i=0;i<=n;i++)
		m[i][0]=0;
		
	for(int i=1;i<=n;i++) 	{
		for(int j=1;j<=l;j++) {
			if(p[i]>j)
				m[i][j] = m[i-1][j];
			else
				m[i][j] = max(m[i-1][j],m[i-1][j-p[i]]+v[i]); 
		}
	
	}

	return m[n][l];
}

int main()
{
	int g,c,i=0,s,x,r=0;
	
	scanf("%d",&g);
	while(g--)
	{
		scanf("%d",&c);
		
		for(int j=0; j<= TAM;j++)
			v[j]=p[j]=0;
			
		scanf("%d", &s);
		for(i=1;i<=c;i++)
			scanf("%d %d",&v[i],&p[i]);
	
		x=pd(c,s);
		
		printf("Galho %d:\nNumero total de enfeites: %d\n\n",++r,x);
		//mostra(c,s);
	}
	
	return 0;
}
