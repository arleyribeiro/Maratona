#include <bits/stdc++.h>

using namespace std;

int main (){

	int n,m,f,d;
	string s, s1;
	while(scanf("%d",&n)==1,n){
	
		map<string,string>mp;
		while(n--) {
			cin>>s>>s1;
			mp[s]=s1;
		}
		f=0;
		scanf("%d",&m);
		while(m--) {
			cin>>s>>s1;
			string cmp = mp[s];
			d=0;
			for(int i=0; i<cmp.size();i++) {
				if(cmp[i]!=s1[i])
					d++;			
			}
			if(d>1)
				f++;
						
		}
		printf("%d\n",f);
	}

	return 0;
}
