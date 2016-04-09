#include <bits/stdc++.h>

using namespace std;

int main () {
	string s;
	int c=39,c1=34,c2=96,f=1;
	while(getline(cin,s), !cin.eof()) {
		
		for(int i=0; i < s.size(); i++) {
			if(s[i]==c1 && f) {
				printf("%c%c",c2,c2);
				f=0;
			}else if(s[i]==c1 && !f) {				
				printf("%c%c",c,c);
				f=1;
			}else {
				printf("%c",s[i]);
			}
		}
		printf("\n");
	}

	return 0;
}