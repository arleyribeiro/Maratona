#include <bits/stdc++.h>

using namespace std;

struct power{
	string n;
	long long p;
};

int main() {
	int n,pos=0,c;
	long long x=0;
	power ps;
	ios_base::sync_with_stdio(false);

	while(cin >> n,n) {
		vector<power> mv;
		string s;
		pos=-1;

		long long ta=0, tb=0, sempeso=0, spa=0;
		int c=1;
		while(n--) {
			cin >> s;
			x=0;
			for(int i=0;i<s.size();i++) {
				x+=s[i];
			}
			ps.n=s;
			ps.p=x;
			sempeso+=ps.p;
			tb+=ps.p*c++;
			mv.push_back(ps);
		}
		for(int i=0;i<mv.size();i++) {
			if(ta<tb){
				tb-=sempeso;				
				sempeso-=mv[i].p;
				spa+=mv[i].p;
				ta+=spa;
			}
			if(ta==tb) {
				pos=i;
				break;
			}else if(ta>tb)
				break;
		}
		
		if(pos>-1)
			cout << mv[pos].n  << endl;
		else
			cout <<"Impossibilidade de empate." << endl;
	}
	
	
	return 0;
}