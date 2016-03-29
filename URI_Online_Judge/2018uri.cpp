#include<bits/stdc++.h>

using namespace std;

typedef struct ct {
	string n;
	int g,p,b;
}ct;

bool cmp(ct a, ct b) {
	if(a.g == b.g) {
		if(a.p == b.p){
			if(a.b == b.b){
				return a.n < b.n;
			}else{
				return a.b > b.b;
			}
		}else{
			return a.p > b.p;
		}
	}else{
		return a.g > b.g;
	}
}


int main() {
	int n, m=0;
	ct k;
	vector< ct >st;
	string s, ps;
	while(getline(cin,s) && !cin.eof()){
		m=1;
		while(m<=3) {
			getline(cin,ps);
			int f=1;
			for(int i=0; i < st.size(); i++) {
				if(st[i].n == ps) {
					if(m==1) {
						st[i].g++;
					}else if(m==2) {
						st[i].p++;
					}else if(m==3) {
						st[i].b++;
					}
					f=0;
				}
			}
			
			if(f) {
				k.n=ps;
				if(m==1) {
					k.g=1;
					k.p=0;
					k.b=0;
				}else if(m==2) {
					k.g=0;
					k.p=1;
					k.b=0;
				}else if(m==3) {					
					k.g=0;
					k.p=0;
					k.b=1;
				}
				st.push_back(k);
				f=0;
			}
			m++;
		}
	
	}
	stable_sort(st.begin(), st.end(), cmp);
	cout << "Quadro de Medalhas\n";
	for(int i=0; i < st.size(); i++) 
		cout << st[i].n << " " << st[i].g << " " << st[i].p << " " <<st[i].b << endl;

	return 0;
}
