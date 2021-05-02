#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("escolha uma opcao de 1 a 3: ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("\nA opcao escolhida foi 1");
        break;
    case 2:
        printf("\nA opcao escolhida foi 2");
        break;
    case 3:
        printf("\nA opcao escolhida foi 3");
        break;
    default:
        printf("opcao invalida");
        break;
    }




}