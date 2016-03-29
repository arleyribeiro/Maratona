#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

set<ull>st;
map< ull, int >mp;

void prime_fact(ull x) {
	ull i,c;
	c=x;
	while((c%2)==0) {
		//num[2]++;
		if(!mp.count(2)) {
			mp[2]=1;
			st.insert(2);
		}else
			mp[2]++;

		c=c/2;
	}

	i=3;
	while(i <= sqrt(c)+1) {
		if((c%i)==0) {
			//num[i]++;
			if(!mp.count(i)) {
				mp[i]=1;
				st.insert(i);
			}else
				mp[i]++;

			c=c/i;
		}else {
			i = i+2;
		}
	}
	if(c>1) {
		//num[c]++;
		if(!mp.count(c)) {
			mp[c]=1;
			st.insert(c);
		}else
			mp[c]++;
	}
}

ull pow2(int b, int e) {
	ull s=1;
	for (int i = 0; i < e; ++i)
		s*=b;
	//cout << s << endl;
	return s;
}



int main() {

	int c,r=1;
	ull p,t,x;
	set<ull>::iterator it;
	scanf("%d",&c);
	while(c--) {
		scanf("%lld",&x);
		p=t=1;
		prime_fact(x);

		for (it=st.begin(); it!=st.end(); ++it) {
			int b = *it, k=mp[ b ];
			//cout<< b << " " << k <<endl;
			if(k%2==0 && k>0) {
				p=pow2(b,k);
			}else if(k%2==1 && k>0) {
				k++;
				//cout<< b << " " << k <<endl;
				p=pow2(b,k);
				//cout << p << endl;
			}
			t*=p;
		}
		st.clear();
		mp.clear();
		cout <<"Caso #"<< r++ <<": " << t <<endl;
	}
	return 0;
}