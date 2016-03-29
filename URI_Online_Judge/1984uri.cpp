#include <bits/stdc++.h>

using namespace std;

int main() {
/**/
	char b[30];

	scanf("%s",b);
	int c=strlen(b);
	for(int i=c-1;i>=0;i--) {
		printf("%c", b[i]);
	}
	printf("\n");

	return 0;
}