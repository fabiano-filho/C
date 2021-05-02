#include <stdio.h>
#include <stdlib.h>

int main() {
    // Definindo variaveis e a Matriz
    int i, j, m[3][3];
    // Leitura dos valores
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Elemento [%d] [%d] = ", i, j);
            scanf("%d", &m[i][j]);
        } 
    }
    // Mostra a matriz gerada
    printf("\n*** Matriz gerada ***\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    // Multiplica cada elemento por 5
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            m[i][j] = m[i][j] * 5;
        }
    }
    // Imprime a matriz final
    printf("\n*** Matriz multiplicada por 5 ***\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}