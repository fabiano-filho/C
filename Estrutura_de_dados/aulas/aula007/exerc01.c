#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, LIN, COL, soma = 0;
    // Recebendo valores das linhas e colunas
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &LIN);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &COL);
    // ALOCANDO MEMÓRIA PARA O PONTEIRO DE PONTEIRO
    int **p;
    p = (int **) malloc (LIN * sizeof(int));
    // Alocando memória para o vetor de ponteiros
    for (i = 0; i < LIN; i++) {
        p[i] = (int *) malloc (COL * sizeof(int));
    }
    // testando se alocou corretamente
    if (p == NULL)
    {
        printf("\n *** Memoria insuficiente\n");
        return 0;
    }
    else {
        for (i = 0; i < LIN; i++) {
            for (j = 0; j < COL; j++)
            {
                printf("Elemento de [%d] [%d] = ", i, j);
                scanf("%d", &p[i][j]);
                // Somando a diagonal principal
                if (i - j == 0) {
                    soma = soma + p[i][j];
                } 
            } 
        }
    
    // Imprimindo a matriz
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++)
        {
            printf(" %3d ", p[i][j]);
        }
        printf("\n");
    }
    // Imprimindo o valor da soma da matriz diagonal principal
    printf("\nA soma da matriz diagonal principal eh: ");
    printf("\n%d ", soma);
    // Liberando memória dos vetores de ponteiros
    for (i = 0; i < LIN; i++) {
        free(p[i]);
    }
    // Liberando a memoria do ponteiro de ponteiro
    free(p);
    }
    return 0;
}