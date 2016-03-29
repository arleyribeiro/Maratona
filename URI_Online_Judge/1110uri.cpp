#include <bits/stdc++.h>

using namespace std;

int main() {

	int t,a,b,c;
	while(scanf("%d",&t)==1, t) {
	
		queue< int >f;
		vector< int >d;
		for(int i=1;i<=t;i++)
			f.push(i);
					
		while(f.size() > 1) {
			a=f.front();
			d.push_back(a);
			f.pop();
			b=f.front();
			f.push(b);
			f.pop();		
		}
		
		cout << "Discarded cards: ";
		for(int i=0;i<d.size();i++) {
		
			if(i>0)
				printf(", ");
			 printf("%d",d[i]);			
		}
		printf("\nRemaining card: %d\n",f.front());
		
	
	}


	return 0;
}
