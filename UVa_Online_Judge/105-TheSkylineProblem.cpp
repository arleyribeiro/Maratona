#include <stdio.h>
#define TAM 10000

int main()
{
    int left=0, right=0, hight=0, rMax=0,rMin=100000, i=0, j=0;
    int num[TAM] = {0};
    
    while(scanf("%d %d %d", &left, &hight, &right)== 3)
    {
        if(right > rMax)
        {
            rMax=right;
        }
        
        if(left < rMin)
        {
            rMin=left;
        }
        
        for(i=left; i < right; i++)
        {
            if(num[i] < hight)
            {
                num[i]=hight;                
            }
           
        }
    }

    /*show sequence*/
        printf("%d ", rMin);
        
            for(i=rMin, j=(rMin+1); i <= rMax; i++,j++)
            {
                hight=num[i];
                if(num[i]!=num[j])
                {
                     printf("%d %d ", hight, j);   
                }
             }
        printf("0\n");


    return 0;
}
