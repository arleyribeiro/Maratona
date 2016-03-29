#include <cstdio>
#include <cstdlib>
#include <stack>
#include <queue>
#define TAM 1001

using namespace std;

int heap[TAM];
stack<int>pilha;
queue<int>fila;

int n=0;

void sobe(int i)
{
	int p, tmp;
	p=i/2;
	
	while(i!=1 && heap[p] < heap[i])
	{
		tmp = heap[p];
		heap[p] = heap[i];
		heap[i] = tmp;
		i = p;
		p = i/2;
	}
}

void desce(int i)
{
	int f, tmp;
	f=2*i;
	while(f <= n)
	{
		if(f<n && heap[f] < heap[f+1])
			f = f+1;
		if(heap[f]<=heap[i])
			break;
		tmp=heap[f];
		heap[f]=heap[i];
		heap[i]=tmp;
		i=f;
		f=2*i;	
	}
}

void insere(int x)
{
	heap[n+1] = x;
	n+=1;
	sobe(n);
}

int remove()
{
	int tmp;
	tmp=heap[1];
	heap[1]=heap[n];
	n-=1;
	desce(1);
	
	return tmp;
}

void constroi()
{
	int i;
	for(i=n/2; i >= 1; i--)
		desce(i);
}

void heapClear()
{
	int i;
	for(i=1; i <= n; i++)
		heap[i]=0;
}

int main()
{
	int i=0, c=0, t=0, x=0, nP=1,nF=1,nH=1;/* eF=0, eP=0, eH=0;*/
	
	while(scanf("%d", &c)!=EOF)
	{
		heapClear();
		for(i=1; i <= c; i++)
		{
			scanf("%d %d", &t, &x);
			if(t==1)
			{
				insere(x);
				fila.push(x);
				pilha.push(x);			
			}else
				if(t==2)
				{
					/*eH=remove();*/
					if(remove() != x)
						nH=0;
						
					/*eP=pilha.top();*/
					if(!pilha.empty() && pilha.top() == x)
						pilha.pop();
					else nP=0;
					
					/*eF=fila.front();*/
					if(!fila.empty() && fila.front() == x)
						fila.pop();
					else nF=0;			
				}
		}
		if(nH==1 && nP==0 && nF==0)
			printf("priority queue\n");
		else if(nH==0 && nP==1 && nF==0)
			printf("stack\n");
		else if(nH==0 && nP==0 && nF==1)
			printf("queue\n");
		else if(nH==0 && nP==0 && nF==0)
			printf("impossible\n");
		else printf("not sure\n");
		
		heapClear();
		while(!pilha.empty())
			pilha.pop();
		while(!fila.empty())
			fila.pop();
		n=0, nP=1, nF=1,nH=1;/*eF=0,eP=0,eH=0;*/			
	}
	return 0;
}
