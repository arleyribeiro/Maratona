#include <bits/stdc++.h>

using namespace std;

int main() {

	stack<char>st;
	string str;
	int c;
	scanf("%d ",&c);
	while(c--) {
		getline(cin, str);
		int f=1;

		for(int i=0; i < str.size();i++) {
			if(str[i]=='(' || str[i]=='[') {
				st.push(str[i]);
			}else if(str[i]==')' && st.size()>0 && st.top() =='(') {
				st.pop();
			}else if(str[i]==']' && st.size()>0 && st.top() =='[') {
				st.pop();
			}else if((str[i]==')' || str[i]==']') && st.size()==0){
				f=0;break;
			}else if(str[i]==')' && st.size()>0 && st.top() =='['){
				f=0;break;
			}else if(str[i]==']' && st.size()>0 && st.top() =='('){
				f=0;break;
			}
		}
		if((!st.size() && f) || str=="")
			printf("Yes\n");
		else
			printf("No\n");

		while(!st.empty()) {
			st.pop();
		}
	}
	return 0;
}
