#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double X = 0, Y = 0;
    double potencia;

    printf("Digite um numero: ");
    scanf("%lf", &X);

    printf("Digite outro numero: ");
    scanf("%lf", &Y);

    potencia = pow(X, Y);
    printf("O numero %.2lf elevado a %.2lf eh igual a: %.2lf", X, Y, potencia);

    return 0;
    system("Pause");
}