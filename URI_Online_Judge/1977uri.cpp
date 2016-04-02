#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
#define TAM 20100
using namespace std;
 
vector< pair<int,int> >g[TAM];
vector<int>heap;
 
long long int d[TAM]={INF};
int vis[TAM]={0};
 
int n, m; 
 
bool comp(int u, int v){
    return d[u] > d[v];
}
 
 
void makeSet() {
    int i;
    for(i=1;i<=n*2;i++) {
        d[i]=INF;
        vis[i]=0;
    }
}

void djk(int u) {
    int x,i=0;  
     
    for(i=0;i<=n;i++){
        d[i]=INF;
        vis[i]=0;
    }
    
    heap.push_back(u);
    d[u]=0;
    make_heap(heap.begin(),heap.end(),comp);
     
    while(!heap.empty()) {
        x=heap[0];
        pop_heap(heap.begin(), heap.end(), comp);
        heap.pop_back();
        
        for(i=0; i < g[x].size();i++) {
             if(d[ g[x][i].first ] > g[x][i].second + d[x]) {
                d[ g[x][i].first ] = g[x][i].second + d[x];
                heap.push_back( g[x][i].first ); //insere o vertice no heap novamente
                push_heap(heap.begin(), heap.end(), comp);//sobe o elemento inserido
                
             }
        }
    }
}

int main(){
 
    int u,v,z,i,w,t;
    map<string, int>mp;
    string s, s1;
    
    while(scanf("%d %d %d", &t, &m, &n), m+t+n) {
        int hora=17, min=30;       
        for(i=0;i<=n;i++){
            g[i].clear();
        }       
         heap.clear();
         int cont=1;
            for(i=0;i<m;i++) {
                cin>>s>>s1>>z;
                if(!mp.count(s))
                    mp[s]=cont++;
                    
                if(!mp.count(s1))
                    mp[s1]=cont++;
                    
                g[ mp[s] ].push_back (make_pair (mp[s1], z));
            }
             
            djk(mp["varzea"]);
            
            int h=0, tp=0;
            if(t>30)
                min=50;
                
                
            if(d[mp["alto"]] != INF)
                tp=d[mp["alto"]];
           
           int min2=0, t2=(min+tp),h2=0;  
             
            min2=t2%60; 
            h2=t2/60;
            hora+=h2;
            if(hora>=24) {
                hora=hora%24;
                h=1;
            }
                       
            if(hora==17 && (min2>=0&&min2<=59) && !h) {
                
                if(min2<10)
                    printf("%d:0%d\nNao ira se atrasar\n", hora,min2);
                else
                    printf("%d:%d\nNao ira se atrasar\n", hora,min2);
            }else if(hora==18 && min2==0 && !h)  {          
                printf("%d:0%d\nNao ira se atrasar\n", hora,min2);
            }else { 
            
                if(hora<10)
                    printf("0%d:", hora);
                else
                    printf("%d:", hora);
                
                if(min2<10)
                    printf("0%d\nIra se atrasar\n", min2);
                else
                    printf("%d\nIra se atrasar\n", min2);        
            }
            
            mp.clear();         
    }
     
    return 0;
}