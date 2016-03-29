#include <bits/stdc++.h>

using namespace std;


int main() {
	int r,t;
	
	scanf("%d ",&t);
	
	while(t--) {
		string s,s1,s2;
		getline(cin,s);
		getline(cin,s1);
		getline(cin,s2);
		
		int v[26]={0},f=1;
		for(int i=0;i<s1.size();i++){
			int found=s.find(s1[i]);
			
			if(found!=string::npos) {
				if(!v[s1[i]-65])
					v[s1[i]-65]=1;
				else
					v[s1[i]-65]++;
					
				s.erase(s.begin()+found,s.begin()+found+1);
			}else
				f=0;
		}
		
		for(int i=0;i<s2.size();i++){
			int found=s.find(s2[i]);
			
			if(found!=string::npos) {
				if(!v[s2[i]-65])
					v[s2[i]-65]=1;
				else
					v[s2[i]-65]++;
					
				s.erase(s.begin()+found,s.begin()+found+1);
			}else
				f=0;
		}
		int i=0;
		while(i<26) {
			if(v[i]>1) {
				f=0;
				break;
			}
			i++;
		}
		sort(s.begin(),s.end());
				
		if(f)
			cout << s << endl;
		else
			cout << "CHEATER\n";
	}	
	

	return 0;	
}

