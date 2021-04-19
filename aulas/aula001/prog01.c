#include <stdio.h>

int numero = 10;

int somar(int n1, int n2)
{
    int soma = n1 + n2;
    printf("numero: %d\n", numero);
    return soma;
}
int main()
{
    int resultado = somar(10, 20);


    
    printf("%d\n", resultado);
    return 0;
}