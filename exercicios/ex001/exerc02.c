// blibioteca
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//funçao principal
int main()
{   
    //variaveis
    int num, quadrado, raiz;
    //saida para coleta de dados
    printf("Digite um numero: ");
    scanf("%d", &num);
    //condiçao
    if (num % 2 == 0)
    {
        //formula para numeros pares
        quadrado = num * num;
        raiz = sqrt(num);
        printf("\nO numero %d elevado ao quadrado equivale: %d\n", num, quadrado);
        printf("E sua raiz eh: %d\n", raiz);
    }
    
    return(0);
}