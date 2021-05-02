#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    
    printf("Digite um numero entre 0-100: ");
    scanf("%d", &n);

    if ( n <= 100 && n >= 0)
    {
        printf("\nO numero %d esta entre 0 e 100", n);
    }
    else
    {
        printf("\nO numero %d nao esta entre 0 e 100", n);
    }
    
    return 0;
}