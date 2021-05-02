#include <stdio.h>
#include <stdlib.h>

int main()
{
    // definindo variaveis
    float C, F;
    // Entrada de dados
    printf("Digite uma temperatura em celsius: ");
    scanf("%f", &C);
    // Formula
    F = (9.0 / 5.0) * C + 32;
    // imprimindo resultado
    printf("\nA temperatura em Fahrenheit eh: %.2f", F);

    return(0);
}