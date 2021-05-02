#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor;
    printf("Digite um numero: ");
    scanf("%d", &valor);
    switch (valor)
    {
    case 0:
        printf("O valor digitado foi 0");
        break;
    case 1:
        printf("O valor digitado foi 1");
        break;
    case 2:
        printf("O valor digitado foi 2");
        break;
    default:
        printf("Operacao invalida");
        break;
    }

    system("Pause");
    return 0;
}