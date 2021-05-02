#include <stdio.h>
#include <stdlib.h>


int main()
{
    //atribuindo variaveis
    int contador = 0, i, vet[10], vetImpar[10];

    // For de leitura e tratamento
    for (i = 0; i < 10; i++)
    {
        printf("\n Digite o numero: ");
        scanf("%d", &vet[i]); // inserindo os números no vetor
       
        if (vet[i] % 2 != 0) // se o número for impar
        {
            vetImpar[contador] = vet[i]; contador++;
        }
        
    }

    printf("\n\t Os numeros impares sao: \n");
    for (i = 0; i < contador; i++)
    {
        printf("\n%d", vetImpar[i]); // mostrando os números impares
    }
    
    return 0;
}