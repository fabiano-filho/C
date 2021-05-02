#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    //variaveis
    float c, resultado;
    printf("Digite uma temperatura em Celsius: ");
    scanf("%f", &c);
    // calculo
    resultado = c*(9.0/5.0)+32.0;
    //Conversao
    printf("A temperatura em Fahrenheit é: %.2f\n", resultado);
    system("PAUSE");
}