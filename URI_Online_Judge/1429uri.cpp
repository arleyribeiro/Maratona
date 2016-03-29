#include <bits/stdc++.h>

using namespace std;
int fact[7]={1,1,2,6,24,120,720};
int main() {

	string s,s2;
	int r;
	while(cin>>s && s!="0") {
		r=0;
		int p=s.size();
		for(int i=0;i<s.size();i++) {
			s2=s[i];
			r+= atoi(s2.c_str())*fact[p-i];
			//cout << r << fact[p-i] << endl;
		}
		cout << r << endl;
	}
	
	return 0;
}