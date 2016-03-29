#include <bits/stdc++.h>
#define TAM 1100
using namespace std;

 
int pai[TAM], tam[TAM];
 
 
int find(int x)
{   
    if(pai[x]!=pai[pai[x]])
        pai[x] = find(pai[x]);
            return pai[x];
}
 
void une(int n, int m)
{
    int a, b;
    a = find(n);
    b = find(m);
    if(a==b)
        return;
     
    if(tam[a]>=tam[b])
    {
        pai[b] = a;
        tam[a] += tam[b];      
    }else
        {
            pai[a] = b;
            tam[b] += tam[a];      
        } 
}
   
void inicializa(int t)
{
    int i;
    for(i=0; i <= t; i++)
    {
        tam[i]=1;
        pai[i]=i;
    }
}
 
 
typedef struct p
{
    int x,y;
}Ponto;
 
typedef struct e
{
    double peso;
    int u, v;
}Edge;
 
Ponto vP[TAM];
vector<Edge> v;
 
bool cmp(Edge a, Edge b){
    return a.peso < b.peso;
}
 
 
 
int main()
{
    int  i=1, j=1, c, n,r, t=0;
    double x, y,d;
    Edge vE;
    scanf("%d", &c);
    while(c--)
    {
    	t++;
        i=j=1;
        scanf("%d %d", &j,&r);       
        n=j;
        /*preenche vE de pontos*/
        while(j--)
        {
            scanf("%lf ", &x);
            scanf("%lf ", &y);
            vP[i].x=x;
            vP[i].y=y;
            i++;
        }
        /*nE=(n*(n-1))/2; //numero total de arestas*/
         
        /*preenche vE de arestas e nomeia os pontos*/
        for(i=1; i <= n; i++)
        {
            for(j=i+1;j <= n;j++)
            {
                d = sqrt(pow((vP[i].x-vP[j].x),2) + pow((vP[i].y-vP[j].y),2));
                vE.peso = d;
                vE.u=i;
                vE.v=j;
                v.push_back(vE);
            }       
        }
        /*ordena vetor de arestas*/
        sort(v.begin(),v.end(),cmp);
         
        /*kruskal*/
        double roads=0,railroads=0;
        int states=0,d=0;
        inicializa(n);
        for(i=0; i < v.size(); i++)
        {
            if(find(v[i].u) != find(v[i].v))
            {
                une(v[i].u, v[i].v );
                d++;
                if(v[i].peso>r){
                	railroads+=v[i].peso;
                	states++;
                }else
                	roads+=v[i].peso;
                             
            }
        }
        printf("Case #%d: %d %.0lf %.0lf\n",t, states+1,roads, railroads);
        v.clear();
    }
 
    return 0;
}
