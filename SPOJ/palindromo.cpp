#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define TAM 257

int palindromo(char *v);
int completaPalindromo(char *v, int inicio);

using namespace std;

int a=0,  aux=257;/*variaveis globais para controle da recursao e menor palindromo possivel, aux representa quantas letras fora adicionadas*/

int main()
{
    char v[TAM];
    
   while(scanf("%s ", v)!=EOF)
    {  
        a=0, aux=257;
        if(palindromo(v) != 1)
           cout << completaPalindromo(v, 0) << endl;
       else cout << "0" << endl;
                   
    }
    
    return 0;
}

int palindromo(char *v)
{
    int i=0, j=0, tam=0, ini=0;
    
    ini=strlen(v)-1;
    tam = ini/2;
    
    for(i=0, j=ini; i <= tam; i++, j--)
    {
        if(v[i]!=v[j])
        {
            return 0;
            break;
        }
    }
    return 1;
}

int completaPalindromo(char *v, int inicio)
{
    int i=0, fim=0, teste =0, cont=0;
    char v2[TAM];
    fim=strlen(v);
    
    if(a == fim)
        return 0;

    strcpy(v2, v);
    cont=0;
    while(teste != 1 && inicio >= 0)
    {            
        v2[fim] = v[inicio];
        v2[++fim] = '\0';
        teste = palindromo(v2);
        inicio--;
        cont++;
          
    }
 
    if((teste==1) && (cont < aux))
        aux = cont;
        
    completaPalindromo(v, a++);
    
    return aux;
}


