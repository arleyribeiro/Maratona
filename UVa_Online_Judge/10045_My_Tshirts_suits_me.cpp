#include <bits/stdc++.h>
#define TAM 50
 
using namespace std;
/*https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1986*/
int v[TAM];
int foi[TAM];
int vc[6];
 
pair<int, int> pes[31];
 
int var=0;
 
 
void bt(int c, int m){ 
     
    if(c==m){                               
        var=1;
        return;
    }
    if(var)
        return;
             
    if(vc[pes[c].first] > 0){
        vc[pes[c].first]--;
        bt(c+1, m);
        vc[pes[c].first]++;
    }
    if(vc[pes[c].second] > 0){
        vc[pes[c].second]--;
        bt(c+1, m);
        vc[pes[c].second]++;
         
    }
}
 
 
int main(){
    int n, m, t, i;
    string c1, c2;
     
    map<string, int> d;
    d["XXL"] = 0;
    d["XL"] = 1;
    d["L"] = 2;
    d["M"] = 3;
    d["S"] = 4;
    d["XS"] = 5;
 
    scanf("%d",&t);
    while(t--){
        scanf("%d %d", &n, &m);
        for(i=0; i<6; i++){
            vc[i]=n/6;
        }
             
        for(i=0; i< m; i++){
            cin >> c1 >> c2;
            pes[i] = make_pair(d[c1], d[c2]);
        }
        var=0;
        bt(0, m);
        if(var){
            printf("YES\n");
        }else
            printf("NO\n");
 
     
    }
    return 0;
}
 
