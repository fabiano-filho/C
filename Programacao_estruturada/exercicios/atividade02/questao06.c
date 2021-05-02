#include <stdio.h>
#include <stdlib.h>

int main() {
    //Definindo variaveis 
    float calculo;
    int folhas;
    //Entrada de dados
    printf("Digite o numero de folhas que voce quer imprimir: ");
    scanf("%d", &folhas);
    //Condição
    if (folhas >= 0 && folhas <= 100)
    {
        calculo = folhas * 0.25;
        printf("A impressao das folhas custara: R$%.2f", calculo);
    }
    else {
        calculo = 0.20 * folhas;
        printf("A impressao das folhas custara: R$%.2f", calculo);
    }
    
    return 0;
}