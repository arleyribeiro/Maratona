#include<cstdio>
#include<vector>
#include<queue>
#define TAM 10000


using namespace std;

int n,m;
vector< int > g[TAM];
int vis[TAM];
queue<int> fila;
 
void makeSet()
{
	int i;
	for(i=0;i<TAM;i++)
	{
		vis[i]=0;
	}
}

/*implementada do slide da aula*/
void bfs(int x)
{
    makeSet();
    fila.push(x);
                
    while(!fila.empty())
    {
        int u = fila.front();
        fila.pop(); 
        
        for(int i=0; i<g[u].size(); i++ )
        { 
        	/*modificado para chamar para a adjacencia de u e não marca x,
        	 só marca x se x tiver uma aresta apontando para ele*/
            if(!vis[g[u][i]])
            { 
                vis[g[u][i]]=1;
                fila.push(g[u][i]);            
            }
        }
        
    }
    
}

int main(){
    int u,v,i,cont=0, j=0;
    
    while(scanf("%d",&n)==1)
    {        
        if(n==0) 
        	break;
        
        /*limpa o grafo, o problema estava aqui*/
    	for(i=1;i<=n;i++)
			g[i].clear();
        
        while(scanf("%d",&u)==1)
        {           
            if(u==0) 
            	break;
            
            while(scanf("%d",&v)==1)
            {                
                if(v==0) 
                	break;                
                g[u].push_back(v);
            }            
        }
        
        /*Vertices que serão buscadas*/
        scanf("%d",&m);
         
        for(j=0;j<m;j++)
        {
            scanf("%d",&u);
            bfs(u);
            
            cont=0;
    		/*conta o numero de vertices não visitados*/
			for(i=1;i<=n;i++) 
				if(!vis[i])
					cont++;
		
			printf("%d",cont);
		
			/*imprimi os vertices não visitados*/
			for(i=1;i<=n;i++) 
				if(!vis[i])
					printf(" %d",i);
			printf("\n");
        }
    }
    
    return 0;
}
