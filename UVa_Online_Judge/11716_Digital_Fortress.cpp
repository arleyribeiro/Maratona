#include <bits/stdc++.h>
#define TAM 10100
using namespace std;

char mt[TAM][TAM];
int main()
{
	char str[TAM];
	int num=0, r=0,i,j,k=0, c;
	scanf("%d ",&c);
	while(c--)
	{
		scanf("\n%[^\n]",str);
		num=strlen(str);
		r=sqrt(num);
		int f=0;
		if(r*r == num)
		{
			k=0;
			for(i=0;i<r;i++){
				for(j=0;j<r && str[k]!='\0';j++)
				{
					mt[i][j]=str[k];
					k++;
				}
			}
			f=1;
		}else{
			printf("INVALID");
		}
		
		if(f)
		{
			for(i=0;i<r;i++){
				for(j=0;j<r;j++){
					printf("%c",mt[j][i]);
				}
			}
		}
			printf("\n");
	}
	
	
	return 0;
}
