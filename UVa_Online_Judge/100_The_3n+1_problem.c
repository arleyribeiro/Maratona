#include <stdlib.h>
#include <stdio.h>

/*Algorithm recursive*/
unsigned int function(unsigned int n, unsigned int cont){
    
       /* printf("%d ", n);*/
        cont++;
        if(n==1)
          return cont;
        
        if(n%2 != 0)
        {
 			function((3*n + 1),cont);
        }else
            {
			function((n/2),cont);
            }

}

int main(int argc, char* argv[])
{

    unsigned int n = 0, m = 0, i = 0, a=0, b=0, k=0, t=0, tmp=0,j=0,max=0,x=0,aux1=0,aux2=0;

 
    while((scanf("%d %d", &n,&m)==2) & ((n > 0) & (m > 0)))
    {  aux1=n;
       aux2=m;
        if(aux1 >= aux2)
        {
            tmp = aux1;
            aux1 = aux2;
            aux2 = tmp; 
         } 

         max=function(aux1,i);
         for(a=(aux1+1),b=0; a <= aux2; a++, b++)
         {
     
             i = 0;
    	     x=function(a,i);
	         if(x > max)
	         {
	              max=x;
	         }
         }
         printf("%d %d %d\n",n,m,max);
    }
    return 0;
}


