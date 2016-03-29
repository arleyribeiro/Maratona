#include <bits/stdc++.h>
#define TAM 1000050

using namespace std;

int main(){

	string s;
	int q,b,e,a,cont=0,c=0,r=0;
	char str[TAM];
	while(scanf("%s ",str)!=EOF) {
	
		scanf("%d",&q);
		printf("Case %d:\n",++r);
		
		while(q--) {
			scanf("%d %d",&b,&e);
			if(b>e) {
				a=e;
				e=b;
				b=a;			
			}
			char ch=str[b];
			a=e-b;
			b++;
			cont=0;
			for(int i=b;i<=e;i++){
				if(str[i]==ch)
					cont++;
				else
					break;
			}
			
			if(a==cont)
				printf("Yes\n");
			else
				printf("No\n");			
		}
	
	}
	
	return 0;
}
