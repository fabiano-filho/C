#include <stdlib.h>
#include <stdio.h>

int main()
{   
    // definindo variaveis
    int altura, largura, profundidade, volume;
    // formulas
    altura = 10;
    largura = 2;
    profundidade = 2;
    volume = altura * largura * profundidade;
    // imprimindo o volume
    printf("O volume ocupado pela caixa eh: %d", volume, "cm3");
    
    return(0);
}