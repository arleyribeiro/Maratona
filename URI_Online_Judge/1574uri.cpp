#include <bits/stdc++.h>
#define TAM 101

using namespace std;

int main() {
	int p[TAM]={0};
	int l,r,s,t,x,i=1,q;
	char in[10];
	
	scanf("%d",&t);
	
	while(t--){
		s=0;
		i=1;
		
		scanf("%d",&x);
		for(int j=0;j<=x;j++)
			p[j]=0;
			
		while(x--) {
		
			scanf("%s",in);
		
			if(strcmp(in,"LEFT") == 0){
				s-=1;
				p[i]=-1;
			}else if(strcmp(in,"RIGHT")==0) {
				s+=1;
				p[i]=1;
			}else if(strcmp(in,"SAME")==0) {
				scanf("%s%d", in, &q);
				s+=p[q];
				p[i]=p[q];
			}
			i++;
		}
		printf("%d\n",s);
	}
	

	return 0;
}

