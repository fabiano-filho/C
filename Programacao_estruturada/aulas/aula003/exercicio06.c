#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int num, antecessor, sucessor;
    
    printf("Digite um numero: ");
    scanf("%d", &num);

    antecessor = num - 1;
    sucessor = num + 1;

    printf("O numero %d tem como: ", num);
    printf("\nAntecessor = %d", antecessor);
    printf("\nSucessor = %d", sucessor);


    return(0);
}