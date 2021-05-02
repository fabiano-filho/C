// blibioteca
#include <stdio.h>
#include <stdlib.h>

//funçao principal
main()
{ // variaveis
    float base, altura, area;
    printf("-=-=-=-= Area do Triangulo =-=-=-=-");
    // entrada de dados do usuario
    printf("\nDigite a base do triangulo (m): ");
    scanf("%f", &base); 
    printf("Digite a altura do triangulo (m): ");
    scanf("%f", &altura);
    // Formula
   area = (base * altura) / 2;
    //condiçao
    if ( area == 0)
   {
       printf("Valor inválido");
   }
   else
   {
       printf("A area do triangulo equivale: %.2f", area);
   }
   
    return(0);
}