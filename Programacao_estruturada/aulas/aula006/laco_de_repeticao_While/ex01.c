#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    float soma = 0, num, media;
    int cont = 0;

    while (cont < 3)
    {
        printf("\nDigite um número: ");
        scanf("%f", &num);
        soma += num;
        cont++;
    }
    media = soma / cont;
    printf("\nA média é: %.2f\n", media);

    return 0;
}