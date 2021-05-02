#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if ( numero < 10)
    {
        printf("\nO numero %d eh menor que 10", numero);
    }
    else
    {
        printf("\nO numero %d eh maior que 10", numero);
    }
    
    return 0;
}