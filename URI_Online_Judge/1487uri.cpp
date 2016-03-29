#include <bits/stdc++.h>
#define TAM 602
#define TAM2 102

using namespace std;

int valor[TAM2];
int peso[TAM2];
int mochila[TAM2][TAM];
// c capacidade - t tempo
int pd(int c, int t)
{
	for(int i=0;i<=t;i++)
		mochila[0][i]=0;
		
	for(int i=0;i<=c;i++)
		mochila[i][0]=0;
		
	for(int i=1;i<=c;i++) 	{
		for(int j=1;j<=t;j++) {
			if(peso[i]>j) {/*Se o peso do item for maior que a capacidade da mochila, leva o item anterior*/
				mochila[i][j] = mochila[i-1][j];
			}
			else{/*O peso deste item cabe na mochila, maximizar o menor peso e maior valor*/
				mochila[i][j] = max(mochila[i-1][j],mochila[i][j-peso[i]]+valor[i]); 
				/*
				Sem repetição
				mochila[i][j] = max(mochila[i-1][j],mochila[i-1][j-peso[i]]+valor[i]); 
				*/
			}
		}
	
	}

	return mochila[c][t];
}

int pd2(int n, int l)
{
	int k,j;
	if(n==0 || l==0)
		return 0;
		
	if(mochila[n][l]>0)
		return mochila[n][l];
	if(peso[n]>l)
		mochila[n][l] = pd(n-1,l);
	else
		mochila[n][l] = max(pd(n-1,l),pd(n,l-peso[n])+valor[n]);

	return mochila[n][l];
}

int main() {

	int n,c=1,t;
	while(scanf("%d%d",&n,&t), n+t) {

		for(int i=0;i<=TAM2;i++) {
			for(int j=0;j<=TAM;j++)
				mochila[i][j]=0;

				peso[i]=valor[i]=0; 
		}
			

		for(int i=1;i<=n;i++)
			scanf("%d%d",&peso[i],&valor[i]);

		cout<<"Instancia "<< c++ << endl << pd2(n,t) << endl<<endl;

	}

	return 0;
}

