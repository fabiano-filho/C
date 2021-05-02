#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v, i, tam;
   
    // lendo posiçoes do vetor pelo teclado
    printf("Quantas posicoes tera esse vetor? ");
    scanf("%d", &tam);
    
    // alocando a memória
    v = (int*) malloc(tam * sizeof(int));

    // testando se alocou corretamente
    if ( v == NULL)
    {
        printf("Memoria insuficiente\n");
    }
    else
    {
    // utilizando a memória alocada
        for (i = 0; i < tam; i++)
        {
            v[i] = i;
        }
    // imprimindo valores
        printf("%d\n", v[0]);
        printf("%d\n", v[tam - 1]);

    // liberando a memória alocada
        free(v);   
    }
    return 0;
}