#include <stdlib.h>
#include <stdio.h>

int main()
{
    int cont, exemplo[5];
    // For de entrada
    for (cont= 0; cont <=4; cont++)
{
    printf("Informe um valor: ");
    scanf("%d", &exemplo[cont]);
}
    printf("\nEstes sao os elementos do vetor: \n");
    for (cont = 0; cont <= 4; cont++)
    {
        printf("Elememento: %d\n", exemplo[cont]);
    }
    

    return(0);
}