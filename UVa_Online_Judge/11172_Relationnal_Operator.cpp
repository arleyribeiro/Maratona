#include <bits/stdc++.h>

using namespace std;

int main() {

  int c;
  long  a,b;
  scanf("%d",&c);
  while (c--) {
      scanf("%ld %ld", &a, &b);
      if(a==b) {
        printf("=\n");
      } else if(a>b) {
        printf(">\n");
      }else if(a<b) {
        printf("<\n");
      }
  }
  return 0;
}
