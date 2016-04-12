#include <bits/stdc++.h>

using namespace std;

int main () {

	map<string, int>mp;
	int cont=0;
	string s;
	for(char i='a'; i<='z';i++) {
		s=i;
		mp[s]=++cont;		
	}

	for(char i='a'; i<='z';i++) {
		for(char j=i+1; j<='z';j++) {
			s=i; s+=j;
			mp[s]=++cont;
		}
	}

	for(char i='a'; i<='z';i++) {
		for(char j=i+1; j<='z';j++) {
			for(char k=j+1; k<='z';k++) {
				s=i;s+=j;s+=k;		
				mp[s]=++cont;
			}
		}
	}

	for(char i='a'; i<='z';i++) {
		for(char j=i+1; j<='z';j++) {
			for(char k=j+1; k<='z';k++) {
				for(char l=k+1; l<='z';l++) {
					s=i;s+=j;s+=k;s+=l;	
					mp[s]=++cont;
				}
			}
		}
	}

	for(char i='a'; i<='z';i++) {
		for(char j=i+1; j<='z';j++) {
			for(char k=j+1; k<='z';k++) {
				for(char l=k+1; l<='z';l++) {
					for(char m=l+1; m<='z';m++) {
						s=i;s+=j;s+=k;s+=l;s+=m;	
						mp[s]=++cont;
					}
				}
			}
		}
	}

	while(cin>>s, !cin.eof()) {
		cout << mp[s] <<endl;
	}

	return 0;
}