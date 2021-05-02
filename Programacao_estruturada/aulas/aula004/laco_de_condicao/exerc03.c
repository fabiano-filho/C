#include <stdio.h>
#include <stdlib.h>

int main()
{
    float resultado, numero;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if ( numero >= 20)
    {
        resultado = numero / 2;
        printf("\nA metade do numero %f eh: %f", numero, resultado);
    }
    else
    {
        printf("\nO numero %d eh menor que 20", numero);
    }
    
    return 0;
}