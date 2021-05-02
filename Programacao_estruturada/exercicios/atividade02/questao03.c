#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("O numero %d eh par", numero);
        if (numero < 0)
        {
            printf(" e negativo");
        }
        else { 
            printf(" e positivo");
        }
    } 
    else {
        printf("O numero %d eh impar", numero);
        if (numero < 0)
        {
            printf(" e negativo");
        }
        else { 
            printf(" e positivo");
        }
        
    }
    




    return 0;
}