#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define cTAM 43

using namespace std;

void strlwr(char *word);

/*memset pesquisar sobre esta função
biblioteca split*/


int main()
{
    int N=0,i=0, j=0, aux=0, cont=0;
    char c;
    char str[cTAM];
    char word[cTAM];
    
      
    scanf("%d ", &N);
    aux=N;
    while(scanf("%s", word) && aux>0)
    {   
        strcpy(str, word);
        strlwr(word);
        //printf("%s \n", str);
        
        for(i=0, j=1; word[j]!='\0'; i++, j++)
        {
            if(word[i] < word[j])
            	cont++;           
        }
        
        if(cont != i)
            printf("%s: N\n", str);
        else printf("%s: O\n", str);
        aux--;
        cont=0;
        memset(word, 0, sizeof(word));
        memset(str, 0, sizeof(str));
                    
    }

    return 0;
}

void strlwr(char *word)
{
     char letra;
     int i=0;

     for(i=0; word[i]!='\0'; i++)
     {
        letra = word[i];
        word[i] = tolower(letra);
     }
      
}

