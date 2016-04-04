#include <bits/stdc++.h>

using namespace std;

int main() {
  int c,r=1,s,i;

  scanf("%d",&c);
  while(c--) {
    vector<int>sl;
    i=3;
    while(i--) {
      scanf("%d",&s);
      sl.push_back(s);
    }
    sort(sl.begin(),sl.end());
    printf("Case %d: %d\n",r++,sl[1]);
  }
  return 0;
}
