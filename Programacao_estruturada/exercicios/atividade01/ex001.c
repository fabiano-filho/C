#include <stdlib.h>
#include <stdio.h>

int main(){
    int ano, mes, dia, dias, idade, convertano, final;
    
    
    printf("digite em que dia voce nasceu: ");
    scanf("%d", &dia);

    printf("digite o mes em que voce nasceu: ");
    scanf("%d", &mes);

    printf("digite o ano em que voce nasceu: ");
    scanf("%d", &ano);

    idade = 2021 - ano;
    dias = (mes * 30) + (30 - dia);
    convertano = idade * 365;
    final = dias + convertano;

    printf("Voce tem %d dias de vida", final);
    
    
    return 0;
    system("Pause");
}