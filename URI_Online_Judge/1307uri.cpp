#include <bits/stdc++.h>


using namespace std;

unsigned int bin_dec(string str2) {

	unsigned int size=str2.size()-1;
	unsigned int num=0;
	for(int i=0;i <= size; i++) {
		if(str2[size-i]=='1') {
			num+=pow(2,i);
		}
	}
	return num;
}

int mdc(int a, int b) {
    return b ? mdc(b, a%b) : abs(a);
}


int main () {

	unsigned int t,b,a,r=1;
	
	cin >>t;
	while(t--) {
		string s,s1;
		cin>>s>>s1;
		
		cout<<"Pair #"<<r++<<": ";
		if(s[0]=='0' || s1[0]=='0') {
			cout << "Love is not all you need!" << endl;
		}else {
			a=bin_dec(s);
			b=bin_dec(s1);
		
			if(mdc(a,b)==1)
				cout << "Love is not all you need!" << endl;
			else
				cout << "All you need is love!" << endl;
		}	
	}

	return 0;
}
