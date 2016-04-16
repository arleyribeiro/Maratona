#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m,c;
	int v[101];
	while(scanf("%d",&c),c) {
		int k=1;
		while(k<=c) {
			v[k]=1;
			k++;
		}
		int m=0,cont=0,cc=0,f=1,i=1,r=0,j=1;
		while(f) {
			m++;
			j=1;
			cc=1;
			r=0;
			i=1;
			v[1]=0;
			while(j){				
				if(v[i]) {
					cont++;
				}
				if(cont==m){
					cont=0;
					r=i;
					v[i]=0;
					cc++;
				}
				if(cc==c && r==13){
					f=0;
					break;
				}else if(cc==c && r!=13){
					f=2;j=0;
					break; 
				}
				if(i==c)
					i=0;
				i++;
			}
			if(f==2){
				k=1;
				while(k<=c) {
					v[k]=1;
					k++;
				}
			}
			cont=0;
		}
		cout << m << endl;	
	}
	return 0;
}