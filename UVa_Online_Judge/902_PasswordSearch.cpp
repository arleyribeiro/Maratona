#include <bits/stdc++.h>

using namespace std;

int main()
{
	int c,a,i,k=1;
	string s, p;
	map<string, int>freq;
	set<string>na;
	set<string>::iterator it;
	while(cin>>c>>s)
	{
		a=1;
		for(i=0;i<s.size();i++)
        {
        
        	if(i+c<=s.size())
        	   p=s.substr(i,c);
        	else
        		break;
        	
           if(!freq.count(p))
           {
           		freq[p]=1;           	
           }else
           		freq[p]++;
           		
           	na.insert(p);
           //cout << p << endl;           
        }
        a=0;
       for(it=na.begin();it!=na.end();++it)
       {
       		k=freq[*it];
       		if(k>a)
       		{
       			a=k;
       			p=*it;      		
       		}      
       } 
       cout << p << endl;
		freq.clear();
		na.clear();
	}
	return 0; 
}
