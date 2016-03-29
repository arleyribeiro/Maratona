#include <bits/stdc++.h>

using namespace std;

int main() {
/**/
	unsigned long long c,d;
	int a,e,n;
	char b[30];
	scanf("%d",&n);
	//getchar();
	while(n--) {
		scanf("%d%s ",&a,b);
			e=strlen(b);
			int i=1;
			d=a;
			//cout << a << " "<<e<< " "<<b << endl;
			while((a-(i*e))>=1) {
				d*=(a-(i*e));
				//printf("%d %lld %d\n",(a-(i*e)),d, i);
				i++;
			}
		
		printf("%llu\n",d);
	}

	return 0;
}