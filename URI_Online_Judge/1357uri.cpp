#include <bits/stdc++.h>
#define TAM 10000
using namespace std;

int main () {

	map< char ,string >ib;
	map< string, int >bi;
	ib['0']=".***..";
	ib['1']="*.....";
	ib['2']="*.*...";
	ib['3']="**....";
	ib['4']="**.*..";
	ib['5']="*..*..";
	ib['6']="***...";
	ib['7']="****..";
	ib['8']="*.**..";
	ib['9']=".**...";
	
	bi[".***.."]=0;
	bi["*....."]=1;
	bi["*.*..."]=2;
	bi["**...."]=3;
	bi["**.*.."]=4;
	bi["*..*.."]=5;
	bi["***..."]=6;
	bi["****.."]=7;
	bi["*.**.."]=8;
	bi[".**..."]=9;
	
	int k=0, i, j, n=0;
	
	while(cin>>n, n) {
	
		vector<string> mv;
		vector<string> mv2;
		cin.get();
		
		string t,w,s1,s2,s3,s;
		
		cin>>t;
		cin.get();/*retirar o \n*/
		
		if(t=="S") {
			cin>>w;
			cin.get();			
			for(i=0; i < n; i++) {
				mv.push_back(ib[w[i]]);			
			}
			
			i=j=0;
			for(j=0;j<mv[0].size();j+=2) {
				for(i=0;i<mv.size();i++) {
					if(i>0) 
						cout << " ";
					
					cout << mv[i][j] << mv[i][j+1];
				}
				cout << endl;
			}
				
		}else if(t=="B") {
		
			getline(cin,s1);
			getline(cin,s2);
			getline(cin,s3);
			
			//cout << s1 << "\n" << s2 <<"\n" << s3<<endl; 
			i=j=0;
			
			for(i=0;i<s1.size();i++) {
			    j=i;
			    while(s1[i]!=' ' && i<s1.size()) {
			        i++;
			    }
			    s = s1.substr(j,(i-j));
			    s += s2.substr(j,(i-j));
			    s += s3.substr(j,(i-j));
			  // 	cout << s << endl;
			    mv2.push_back(s);
			}
			
			for(i=0;i<mv2.size();i++) {
					
				cout << bi[mv2[i]] ;
			}
			cout << endl;
		
		}				    
	 } 
  
	return 0;
}





