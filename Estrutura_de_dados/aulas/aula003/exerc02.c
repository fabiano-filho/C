#include <stdio.h>
#include <stdlib.h>

void main()
{
    float vmaior = 0.0, Vetor[5], reformula;
    int cont;

    for (cont = 0; cont <= 4; cont++)
    {
        printf("digite um numero: ");
        scanf("%f", &Vetor[cont]);
    }
     
     for (cont = 0; cont <= 4; cont++)
     {
        if (Vetor[cont] > vmaior)
        {
            vmaior = Vetor[cont];
        }
     } 
    
    for (cont = 0; cont <= 4; cont++)
    {
        reformula = Vetor[cont] / vmaior;
        Vetor[cont] = reformula;
    }

    for (cont = 0; cont <= 4; cont++)
    {
        printf("\nOs elementos sao: %.2f\n", Vetor[cont]);

    }
}
