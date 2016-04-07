#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  string s;
  scanf("%d",&c);
  while(c--) {
    cin>>s;
    if((s[0]=='o' && s[2]=='e') || (s[0]=='o' && s[1]=='n') || (s[1]=='n' && s[2]=='e')) {
      cout << 1 << endl;
    }else if((s[0]=='t' && s[2]=='o') || (s[0]=='t' && s[1]=='w') || (s[1]=='w' && s[2]=='o')) {
      cout << 2 << endl;
    }else if(s.size()==5){
      cout << 3 << endl;
    }
  }
  return 0;
}
