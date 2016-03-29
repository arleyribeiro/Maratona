#include <bits/stdc++.h>

using namespace std;

int main (){

	int n,m,h,i,a;
	scanf("%d",&n);
	while(n--){
		vector<int>v;
		scanf("%d",&m);
		a=m;
		while(a--){
			scanf("%d",&h);
			v.push_back(h);
		}
		sort(v.begin(),v.end());
		i=0;
		while(i<m){
			if(i>0)
				printf(" ");
			printf("%d",v[i++]);
		}
		printf("\n");
	}

	return 0;
}
