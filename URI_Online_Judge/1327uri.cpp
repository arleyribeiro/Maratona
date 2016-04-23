#include <bits/stdc++.h>

using namespace std;

struct pw {
	int b,p;
};

bool cmp(pw a, pw b){
	return a.b < b.b;
}

int main (){

	int  c,x;
	string s;
	pw q;
	while(cin>>c,c) {
		vector<int> mv;
		vector<pw>mv1;
		vector<string>ss,ss1;

		int l=0, f=0;
		while(l<c) {
			cin>>s;
			ss.push_back(s);
			l++;
		}
		
		for(int i=0;i<52;i++) {
			cin>>x;
			mv.push_back(x);
		}

		l=0;
		while(l<52) {
			int k=0;
			while(k<ss.size()) {
				x=mv[l];
				q.p=k++;
				q.b=x;
				mv1.push_back(q);
				l++;
				if(l>51){
					f=1;
					break;
				}
			}
			if(f)
				break;

			sort(mv1.begin(),mv1.end(),cmp);
			int mi=mv1[0].b, t=0;
			for(int i=0;i<mv1.size();i++) {

				if(mi==mv1[i].b)
					t++;
			}
			if(t!=mv1.size()) {

				for (int i = 0; i < mv1.size(); ++i) {				
					if(mi==mv1[i].b) {
						ss1.push_back(ss[mv1[i].p]);
					}
				}

				for (int i = 0; i < ss1.size(); i++) {				
					for(int j=0;j<ss.size();j++) {
					
						if(ss1[i]==ss[j] && ss.size()>1) {
							ss.erase(ss.begin()+j);
							
						}
					}
				}
				ss1.clear();
			}else
				break;
			ss1.clear();
			mv1.clear();
		}

		for(int i=0;i<ss.size();i++) {
			cout << ss[i] << " ";
		}
		cout << endl;

	}

	return 0;
}