#include <bits/stdc++.h>
#define TAM 10000
using namespace std;

typedef struct st
{
    string s;
    string a;
    int t;
    int p;
    int x;
    int f;
    int tt;
}st;


/*maior palvra*/
bool cmpWord( st a, st b){
	return a.x > b.x;
}

bool cmptt( st a, st b){
	return a.tt > b.tt;
}

bool cmpOrd( st a, st b){
	return a.p < b.p;
}

bool cmpOrd2( st a, st b){
		return a.a < b.a;
}

int main () {
	string s1;
	
	while( getline(cin,s1) && s1[0]!='.') {
		int k=0, i, j;
		
		map< string ,string >abv;
		map< string , int >rep;
		map< string , int >arep;
		st s;
		vector<st> mv;
		
        for(i=0;i<s1.size();i++) {
            j=i;
            while(s1[i]!=' ' && i<s1.size()) {
                i++;
            }
            s.s = s1.substr(j,(i-j));
            s.x = s.s.size();
            s.p=k++;
            s.t=0;
            s.f=0;
            
            if(rep.count(s.s)==1) {
				rep[s.s]++;
			} else
				rep[s.s]=1;				
            
            mv.push_back(s);
        }
                
        for(int i=0; i < mv.size(); i++) {
			if(mv[i].x>2) {				
				mv[i].tt=(mv[i].x-2)*rep[mv[i].s];
			}
		}
		
		stable_sort(mv.begin(), mv.end(),cmptt);		
		
		for(int i=0; i < mv.size(); i++) {
			if(mv[i].x>2) {			
						
				mv[i].a=mv[i].s[0];
				mv[i].a+='.';
				
				if(abv.count(mv[i].a)!=1) {
					abv[mv[i].a]=mv[i].s;
					arep[mv[i].s]=1;
					
					mv[i].t=1;
					mv[i].f=1;
				}
				
				if(arep[mv[i].s])
					mv[i].t=1;
					
			}	
		}	
		stable_sort(mv.begin(), mv.end(),cmpOrd);
		
		for(int i=0; i < mv.size(); i++) {
			if (i>0) 
				cout << " ";
				
			if(mv[i].t)
				cout << mv[i].a;
			else
				cout << mv[i].s;
		}
		cout << endl << abv.size() << endl;		
		
		stable_sort(mv.begin(), mv.end(),cmpOrd2);
		
		for(int i=0; i < mv.size(); i++) {
			if(mv[i].f) {
				cout << mv[i].a << " = " << abv[mv[i].a] << endl;
			}
		}
		
	}
	

	return 0;
}





