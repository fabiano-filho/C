#include <stdio.h>

int main()
{
    //variaveis
    int v[10], i;
    // 
    for(i = 0; i < 10; i++)
    {
        v[i] = i;
    }
    //
    for(i = 0; i < 10; i++)
    {
        printf("%d\n", *(v + i)); // v[i] = *(v + i) -> conteudo ;  v + 1 = endereço
    }
    
    return 0;
}