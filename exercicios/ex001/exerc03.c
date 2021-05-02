// blibioteca
#include <stdio.h>
#include <stdlib.h>

//funçao principal
main()
{ // variaveis
    int N, cont;
    printf("Digite um numero: ");
    scanf("%d", &N);
    // condiçao
    if (N < 0 || N % 2 == 1)
    {
        printf("Comando Invalido");
    }
    
    if ( N % 2 == 0)
        if ( N >= 0)
        {
            printf("O numero %d em ordem decrescente em razao de numeros pares eh: ", N);
            for ( cont = N; cont > 0; cont = cont - 2)
            {
                printf("\n%d", cont);
            }
        }
    
    return(0);
}
