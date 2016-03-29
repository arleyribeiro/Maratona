#include <bits/stdc++.h>

using namespace std;

int main() {
/**/
	unsigned long long a,b,c,d,e;
	scanf("%llu%llu",&a,&b);
	if(a>1) {
		c=(a*(a+1))/2;
		d=(b*(b+1))/2;
		e=(d-c)+a;
	}else{
		e=(b*(b+1))/2;
	}
	printf("%llu\n",e);


	return 0;
}