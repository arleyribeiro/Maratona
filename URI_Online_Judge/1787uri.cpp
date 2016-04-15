#include <bits/stdc++.h>
#define TAM 10000
using namespace std;

int main()
{
    long ui, ri, li;
    int a;
    map<long , int>mp;
    for(int i=1;i<=31;i++) {
    	mp[pow(2,i)]=1;
    }

    while(scanf("%d",&a), a) {
    	int p[3]={0};
    	while(a--) {
    		scanf("%ld %ld %ld",&ui,&ri,&li);

    		int r = max(ui,max(ri,li));
    		if(mp[ui]) {
    			p[0]+=1;
    			if(r==ui)
    				p[0]+=1;
    		}
    		if(mp[ri]) {
    			p[1]+=1;
    			if(r==ri)
    				p[1]+=1;
    		}
    		if(mp[li]) {
    			p[2]+=1;
    			if(r==li)
    				p[2]+=1;
    		}
    	}

    	if(p[0]>p[1] && p[0]>p[2]) {
    		printf("Uilton\n");
		}else if(p[1]>p[0] && p[1]>p[2]) {
    		printf("Rita\n");
		}else if(p[2]>p[0] && p[2]>p[1]) {
    		printf("Ingred\n");
		}else {
			printf("URI\n");
		}


    }

    return 0;
}