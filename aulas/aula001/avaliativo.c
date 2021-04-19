#include <stdio.h>
#include <stdlib.h>

int menor(int a, int b)
{
    int menor;
    if (a < b)
    {
        menor = a;
        return menor;
    }
    else
        menor = b;
        return menor;
}
void main()
{
    int a = 0, b = 0, final = 0;
    printf("\nCOMPARADOR DE NuMEROS");

    printf("\nDigite um número: ");
    scanf("%d", &a);
    
    printf("\nDigite outro número: ");
    scanf("%d", &b);    

    final = menor(a, b);

    printf("\nO menor valor é: %d", final);
}
