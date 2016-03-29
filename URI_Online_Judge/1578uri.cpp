#include <bits/stdc++.h>
#define TAM 102

using namespace std;

unsigned long long tam(unsigned long long x) {
	int i=1;
	while(x>9) {
		i++;
		x/=10;
	}
	return i;
}

int main() {
	int l=0,t,x,i,j,a=3;
	unsigned long long mat[TAM][TAM], p[TAM],q,b,r;
		
	scanf("%d",&t);
	
	while(t--){
	
		if(l++)
			printf("\n");
			
		scanf("%d",&x);
		
		for(i=0;i<x;i++)
			p[i]=0;
		
		for(i=0;i<x;i++) {
			for(j=0;j<x;j++) {
				scanf("%llu",&q);
				mat[i][j]=(q*q);
				r=tam(mat[i][j]);

				if(p[j]<r)
					p[j]=r;	
			}
		}
		printf("Quadrado da matriz #%d:\n", ++a);
		for(i=0;i<x;i++) {
			for(j=0;j<x;j++) {
				
				r=tam(mat[i][j]);
			    b = (p[j]- r);
				for(int k=0; k<b;k++) {
					printf(" ");
				}
				if(j+1 <x)
					printf("%llu ",mat[i][j]);
				else
					printf("%llu",mat[i][j]);
				
			}
			printf("\n");
		}

	}
	

	return 0;
}

