#include <bits/stdc++.h>

using namespace std;

char str[60];

int main() {
		int r,t;
		scanf("%d",&t);
		
		while(t--) {
			scanf("%s",str);
			scanf("%d ",&r);
			for(int i=0;str[i]!='\0';i++) {
					if((str[i] - r) < 65) 
						printf("%c", (str[i] - r)+ 26);
                    else 
                    	printf("%c", (str[i] - r));				
			 }
			printf("\n");		
		}	
		
	
		return 0;	
}


