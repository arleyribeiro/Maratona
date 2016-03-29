#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v=0, t=0, d=0;
    
    while(scanf("%d %d ", &v, &t)==2)
    {
        d = (v*(t*2));
        printf("%d\n", d);
    }
    return 0;
}
