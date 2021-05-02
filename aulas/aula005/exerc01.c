#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *v1, *v2, *v3, i, tam;
   
    // lendo posiçoes do vetor pelo teclado
    printf("Quantas posicoes tera os vetores? ");
    scanf("%d", &tam);
    
    // alocando a memória
    v1 = (int*) malloc(tam * sizeof(int));
    v2 = (int*) malloc(tam * sizeof(int));
    v3 = (int*) malloc(tam * sizeof(int));

    // testando se alocou corretamente
    if ( v1 == NULL || v2 == NULL || v3 == NULL)
    {
        printf("Memoria insuficiente\n");
    }
    else
    {
    // utilizando a memória alocada
        for (i = 0; i < tam; i++)
        {
            printf("Digite o valor do vetor A na %d posicao: ", i);
            scanf("%d", &v1[i]);
        }
        printf("\n");
        for (i = 0; i < tam; i++)
        {
            printf("Digite o valor do vetor B na %d posicao: ", i);
            scanf("%d", &v2[i]);
        }
        printf("\n");
        for (i = 0; i < tam; i++)
        {
         v3[i] = v1[i] + v2[i];
        }
    // imprimindo valores
        for (i = 0; i < tam; i++)
        {
            printf("O vetor A na posicao %d eh: %d\n", i, v1[i]);   
        }
        printf("\n");
        for (i = 0; i < tam; i++)
        {
            printf("O vetor B na posicao %d eh: %d\n", i, v2[i]);
        }
        printf("\n");
        for (i = 0; i < tam; i++)
        {
            printf("O vetor C na posicao %d eh: %d\n", i, v3[i]);
        }
        printf("\n");
    // liberando a memória alocada
        free(v1);
        free(v2);
        free(v3);   
    }
    return 0;
}