#include <bits/stdc++.h>

using namespace std;

bool has_seven(int n){
    int aux;
    while(n){
        aux = n % 10;
        if(aux == 7)
            return true;
        n /= 10;
    } 
    return false;
}

int main() {
	int n,m,k,x,c;

	while(scanf("%d %d %d",&n,&m,&k), m+n+k) {
		x=c=0;
		while(k) {
			for(int i=1;i<n;i++) {
				++c;
				if(i==m){
					//printf("I : %d %d\n", i, c);
					if(c%7==0)
						k--;
					else if(has_seven(c))
						k--;
				}
				if(k==0)
				break;
			}

			if(k==0)
				break;

			for(int i=n;i>1;i--) {
				++c;
				if(i==m){
					//printf("i : %d %d\n", i, c);
					if(c%7==0)
						k--;
					else if(has_seven(c))
						k--;
				}
				if(k==0)
				break;			
			}
			/*if(c>100000 && k){
				c=-1;
				break;	
			}*/
		}

		printf("%d\n", c);

	}
	
	
	return 0;
}