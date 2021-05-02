#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double y, z, x, raizy, pontenciay, potenciax;
   
    printf("Digite o valor de Z: ");
    scanf("%lf", &z);
    printf("Digite o valor de Y: ");
    scanf("%lf", &y);

    
    raizy = sqrt(y);
    pontenciay = pow(y, 22);
    potenciax = pow(z, 33);
    x = raizy*(pontenciay+potenciax);
    printf("O valor de X eh: %.2lf", x);
    

    return 0;
}