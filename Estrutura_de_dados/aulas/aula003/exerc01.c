#include <stdlib.h>
#include <stdio.h>

int main()
{
    int cont, A[5], B[5];
    
    // For de entrada
    for (cont= 0; cont <=4; cont++)
{
    printf("Informe um valor: ");
    scanf("%d", &A[cont]);
}  
     // Fomula de conversao
    for (cont = 0; cont <=4; cont++)
    {
        if (A[cont] >= 0)
        {
            B[cont] = A[cont];
        }
        else
        {
            B[cont] = 0;
        }
    }  
    //mostrar elementos de B    
    for (cont = 0; cont <= 4; cont++)
    {
        printf("Os elementos de B sao: %d\n", B[cont]);
        
    }
    return(0);
}