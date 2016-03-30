#include <stdlib.h>
#include <stdio.h>

int main()
{
    int t = 0, i = 0, j = 0, k = 0, m = 0, cont=0;
    double vol=0, d1 = 0, d2 = 0,d3 = 0,d4 = 0,d5 = 0,d6 = 0;
    int v[12], vAB[9];
    
    scanf("%d", &t);
    while(t != 0)
    {
        i=0;
        /*preenche os pontos*/
        for(i = 0; i < 12; i++)
        {
            scanf("%d", &v[i]);
            if((v[i] < 0 || v[i] > 1000))
            {
                return 0;
            }
        }
        
       m=0;
       /*preenche os vetores*/
       for(j=3, k=0; j < 12; j++,k++)
       { 
            if(k==3)
            {
                k=0;
            }
            vAB[m] = (v[j] - v[k]);/*vetores AB, AC, AD*/
            m++;
      }
       /*diagonais do determinante*/
       d1 = (vAB[0]*vAB[4]*vAB[8]);
       d2 = (vAB[1]*vAB[5]*vAB[6]);
       d3 = (vAB[2]*vAB[3]*vAB[7]);
       d4 = (vAB[1]*vAB[3]*vAB[8]);
       d5 = (vAB[0]*vAB[5]*vAB[7]);
       d6 = (vAB[2]*vAB[4]*vAB[6]);
       
       vol = ((d1+d2+d3 - (d4+d5+d6)))/6;/*volume do tetraedro*/
       
       if(vol < 0)
       {
        vol= vol*(-1);
       }
       /*A=B=C=D*/
       if(vol==0)
       {
            return 0;
       }
       
      printf("%.6f\n", vol);
        t--;
    }

    return 0;
}
