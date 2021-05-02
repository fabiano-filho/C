#include <stdio.h>
#include <stdlib.h>

main()
{
float a, divisao, resultado;
    printf("Digite um numero: ");
    scanf("%f", &a);
    divisao = a/5;
    resultado = a*a;
    printf("\nO quadrado do numero eh: %.2f\n", resultado);
    printf("\nA quinta parte do numero é: %.2f", divisao);

    system("PAUSE");
}
