#include <bits/stdc++.h>

using namespace std;

int main() {
  long long a=0,c,x;
  string s;
  scanf("%lld ",&c);
  while(c--) {
    cin>>s;
    if(s=="donate") {
      getchar();
      cin>>x;
      a+=x;
    }else if(s=="report") {
      cout << a << endl;
    }
  }
  return 0;
}
