#include <iostream>
using namespace std;

int main()
{
    long long int x=0,s=1;
    cin>>x;
    while(x>0)
    {
    	s*=x;
    	x--;
    }
    cout << s << endl;
    return 0;
}
