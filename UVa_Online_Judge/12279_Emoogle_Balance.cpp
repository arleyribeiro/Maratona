#include <bits/stdc++.h>

using namespace std;

int main () {

	int c,x,cont=0,r=0;

	while(scanf("%d",&c)==1,c) {
		cont=0;
		while(c--) {
			scanf("%d",&x);
			if(x!=0)
				cont++;
			else
				cont--;
		}
		printf("Case %d: %d\n",++r, cont);
	}

	return 0;
}