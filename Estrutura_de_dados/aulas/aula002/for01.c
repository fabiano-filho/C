#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, limite;
    printf("Digite um numero inteiro multiplo de 5: ");
    scanf("%d", &limite);

    for (cont = 0; cont <= limite; cont = cont+5)
    {
        printf("\n%d", cont);
    }
    
    return 0;
}

