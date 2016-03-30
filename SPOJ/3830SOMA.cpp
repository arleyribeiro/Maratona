#include <iostream>
using namespace std;

int main()
{
    long long int x=0, y=0,s=0;
    cin>>x;
    while(x>0)
    {
    	cin>>y;
    	s+=y;
    	x--;
    }
    cout << s << endl;
    return 0;
}
