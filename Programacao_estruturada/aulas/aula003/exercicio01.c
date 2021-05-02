#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    printf("\nOs numeros digitados sao: ");
    printf("\nO numero 1: %d", num1);
    printf("\nO numero 2: %d", num2);
    
    system("PAUSE");
    return(0);
}