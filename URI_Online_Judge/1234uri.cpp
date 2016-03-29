#include <bits/stdc++.h>
using namespace std;

int main() {

	string str;
	char ch;
	int t,f;
	while( getline(cin,str) && !cin.eof()) {
		
		f=1;
		for(int i=0;i<str.size();i++) {
			if(isalpha(str[i])) {
				if(f && islower(str[i])) {
					str[i]=toupper(str[i]);
					f=0;
				}else if(!f && islower(str[i])) {
					f=1;
				}else if(!f && isupper(str[i])) {
					str[i]=tolower(str[i]);
					f=1;
				}else if(f && isupper(str[i])) {
					f=0;
				}
			
			}	
		}		
		cout << str << endl;	
	}


	return 0;
}
