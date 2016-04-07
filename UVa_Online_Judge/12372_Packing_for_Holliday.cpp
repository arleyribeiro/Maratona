#include <bits/stdc++.h>

using namespace std;

int main() {
  int i=1,c,h,w,l;
  scanf("%d",&c);
  while(c--) {
    scanf("%d%d%d",&l,&w,&h);
    cout << "Case "<< i++ << ": ";
    if(l>20 || w>20 || h>20)
      cout << "bad" <<endl;
    else
      cout << "good" << endl;
  }
  return 0;
}
