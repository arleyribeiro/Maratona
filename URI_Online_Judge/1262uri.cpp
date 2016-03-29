#include <bits/stdc++.h>
using namespace std;

int main() {

	string str;
	int r,c=0,a,b=0;
	while( cin>>str>>r) {
	
		a=r;
		b=c=0;
		for(int i=0;i<str.size();i++) {
			while(str[i]=='W') {
				c++;
				i++;
			}
			
			while(str[i]=='R') {
				b++;
				i++;
			}
			if(str[i]=='W')
				i--;
			if(b%r==0)
				c+=(b/r);
			else
				c+=(b/r)+1;
			b=0;
			
		}
		//str.clear();
		cout << c << endl;	
	}


	return 0;
}
