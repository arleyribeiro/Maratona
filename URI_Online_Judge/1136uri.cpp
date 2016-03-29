#include <bits/stdc++.h>
#define TAM 92

int main() {

	int n=0,b=0,d;
		
	while(scanf("%d %d",&n,&b)==2, n+b) {
	
		int v[TAM]={0};
		int bo[TAM]={0};
		
		for(int i=0;i<b;i++) {
			scanf("%d",&bo[i]);		}
			
		
		for(int i=0;i<b;i++){
			for(int j=0;j<b;j++) {				
				d=abs(bo[i]-bo[j]);	
				if(!v[d]) {
					v[d]=1;					
				}
			}
		}
		
		int f=1;
		for(int i=0;i<=n;i++){
			if(!v[i]) {			
				f=0;
				printf("N\n");
				break;
			}
		}
		
		if(f)
			printf("Y\n");			
	}

	return 0;
}
