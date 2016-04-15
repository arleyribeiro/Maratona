#include <bits/stdc++.h>

using namespace std;

int main() {

	long n[13], d[13];
	int a,c;
	d[0]=1;
	for(int i=1;i<=12;i++) {
		d[i] = i * d[i-1];
	}
	n[0]=0;n[1]=1;n[2]=1;n[3]=2;
	for(int i=4;i<=12;i++) {
		n[i]= (i - 1) * (n[i-1]+n[i-2]);
	}

	scanf("%d",&c);
	while(c--) {
		scanf("%d",&a);
		printf("%ld/%ld\n", n[a],d[a]);	
	}
	return 0;
}