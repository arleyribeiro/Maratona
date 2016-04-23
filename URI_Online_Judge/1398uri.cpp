#include <bits/stdc++.h>
#define MOD 131071

using namespace std;

int main() {

	string s;
	while(cin>>s && !cin.eof()) {
		string ns;
		ns=s;
		if(s[s.size()-1]!='#') {

			while(cin>>s && s[s.size()-1]!='#') {
				ns+=s;
			}
			ns+=s;
		}
		ns.erase(ns.size()-1);
		int n=0,l=0;

		for(int i=0;i<ns.size();i++) {
			l = (ns[i]=='1' ? 1 : 0);
			n = n*2 + l;
			n%=MOD;
		}
		if(!n)
			cout << "YES" << endl;
		else			
			cout << "NO" << endl;
	}
	return 0;
}
