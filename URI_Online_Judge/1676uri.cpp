#include <bits/stdc++.h>
#define TAM 34000
using namespace std;

int main() {

	vector<int> mv;
	int v[TAM], cont=0,  f=1;
	mv.push_back(1);
	for(int j=2;j<=TAM;j++)
		v[j]=1;

	for(int j=2;j<=TAM;j++) {
		for(int k=j; f;k++) {
			if(v[k]){
				mv.push_back(k);
				v[k]=0;
				f=0;
				j=k;
			}
		}
		f=1;
		for(int i=j;i<=TAM;i++){
			if(v[i]) {
				cont++;
			}
			if(cont==j){
				cont=0;
				v[i]=0;
			}			
		}
		cont=0;
	}	
	int a;
	while(scanf("%d",&a),a)
		printf("%d\n", mv[a]);

	return 0;
}