#include <stdlib.h>
#include <stdio.h>

int main()
{
    // Atribuindo variaveis
    int n, resultado;
    // Entrada de dados
    printf("Digite um numero: ");
    scanf("%d", &n);
    // formula
    resultado = n / 3;
    // imprimindo resultado
    printf("A terça parte de %d vale: %d", n, resultado);

    return(0);
}