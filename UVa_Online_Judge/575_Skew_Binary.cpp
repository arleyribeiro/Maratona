#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long llu;

int main() {

	llu s;
	string n,s1;
	int b;
	while(cin>>n, n[0]!='0') {
		int size=n.size();
		s=0;
		for(int i=0, j=size;i<size;i++,j--) {
			s1=n[i];
			b=atoi(s1.c_str());
			s+=b*(pow(2,j)-1);
		}
		printf("%llu\n", s);
	}

	return 0;
}