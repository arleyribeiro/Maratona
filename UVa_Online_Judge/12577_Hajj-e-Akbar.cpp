#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  int i=1;
  while(cin>>s && s!="*") {
    cout << "Case "<< i++ << ": ";
    if(s=="Hajj")
      cout << "Hajj-e-Akbar" <<endl;
    else
      cout << "Hajj-e-Asghar" << endl;
  }
  return 0;
}
