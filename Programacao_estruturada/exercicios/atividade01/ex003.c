#include <stdio.h>
#include <stdlib.h>

int main()
{   
    // Definindo variaveis
    int n[5], i, soma, media, produto;
    
    // Entrada de dados do usuario
    for ( i = 0; i < 5; i++)
    {
        n[i] = i;
        printf("Digite um numero: ");
        scanf("%d", &n[i]);
    }
    // Formulas 
    soma = n[0] + n[1] + n[2] + n[3] + n[4];
    produto = n[0] * n[1] * n[2] * n[3] * n[4];
    media = (n[0] + n[1] + n[2] + n[3] + n[4]) / 5;
    
    // Imprimir resultados
    printf("\nO soma dos numeros eh: %d", n[0], soma);
    printf("\nO produto dos numeros eh: %d", produto);
    printf("\nO produto dos numeros eh: %d\n", media);
    
    system("Pause");
    return 0;
}