#include <stdio.h>
#include <stdlib.h>
#define LIN 4
#define COL 5

int main() {
    int i, j, aux = 0;
    
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
    // Populando a matriz com números pares
    else {
        for (i = 0; i < LIN; i++) {
            for (j = 0; j < COL; j++)
            {
                p[i][j] = aux;
                aux = aux + 2;
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
    // Liberando memória dos vetores de ponteiros
    for (i = 0; i < LIN; i++) {
        free(p[i]);
    }
    // Liberando a memoria do ponteiro de ponteiro
    free(p);
    }
    return 0;
}