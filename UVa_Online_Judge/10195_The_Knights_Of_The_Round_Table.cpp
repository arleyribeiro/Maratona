#include <bits/stdc++.h>

using namespace std;

int main(){

	double a,b,c,p,r;
	
	while (scanf("%lf %lf %lf",&a, &b,&c)!=EOF) {
	
		if(a==0 || b==0 || c==0) {
			printf("The radius of the round table is: 0.000\n");	
		}else {
			p=((a+b+c)/2.0);
			r=sqrt(((p-a)*(p-b)*(p-c))/p);
			printf("The radius of the round table is: %.3lf\n",r);
		}
	}
	
	return 0;
}
