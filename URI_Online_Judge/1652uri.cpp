#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int l,n;
	map<string, string>mp;
	string s,s1;
	cin>>l>>n;

	while(l--) {
		cin>>s>>s1;
		if(!mp.count(s))
			mp[s]=s1;
	}
	
	while(n--) {
		cin>>s;
		if(mp.count(s)) {
			cout << mp[s] << endl;
		}else if(s[s.size()-2]!='a' && s[s.size()-2]!='e' && s[s.size()-2]!='i' && s[s.size()-2]!='o' && s[s.size()-2]!='u'  && s[s.size()-1]=='y') {
				s=s.substr(0,s.size()-1)+"ies";
				cout << s << endl;
		}else if(s[s.size()-1]=='s' || s[s.size()-1]=='o'|| s[s.size()-1]=='x') {
			s+="es";
			cout << s << endl;
		}else if((s[s.size()-2]=='s' && s[s.size()-1]=='h') ||(s[s.size()-2]=='c' && s[s.size()-1]=='h') ) {
			s+=+"es";
			cout << s << endl;
		}else
			cout<< s << "s" << endl;
	}
	return 0;
}
