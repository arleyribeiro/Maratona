#include <bits/stdc++.h>

using namespace std;

int main() {

	int t, found;
	string s,s1;
	scanf("%d ",&t);
	while(t--) {
		cin>>s>>s1;
		found=0;
		for(int i=s.size()-1, j = s1.size()-1; i>=0 && j>=0;i--, j--)
			if(s[i]==s1[j])
				found++;

		if(found==s1.size())
			cout<< "encaixa\n";
		else
			cout<< "nao encaixa\n";
			
	}
	
	return 0;
}