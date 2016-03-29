#include <bits/stdc++.h>
#define TAM 1010
using namespace std;

int main() {
	int c,s,a, t,nt[TAM]={0};
	double m,p;
	scanf("%d",&c);
	while(c--) {
		scanf("%d",&t);
		s=a=0;
		for (int i = 0; i < t; ++i) {
			scanf("%d",&nt[i]);
			s+=nt[i];	
		}
		m=(s/(1.0*t));
		for(int i = 0; i < t; ++i)
			if(nt[i]>m)
				a++;
		printf("%.3lf%\n", (a*100.0)/t);
	}
	return 0;
}