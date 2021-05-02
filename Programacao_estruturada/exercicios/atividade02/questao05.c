#include <stdio.h>
#include <stdlib.h>

int main() {

    int ano1, ano2, formula;
    printf("Digite os primeiros dois digitos do ano em que você nasceu: ");
    scanf("%d", &ano1);
    printf("Digite os dois últimos digitos restantes: ");
    scanf("%d", &ano2);
    formula = (ano1 + ano2) % 5;
    printf("O seu perfil de pessoa é: \n");
    if (formula == 0) {
        printf("Tímido ");
    }
    if (formula == 1) {
        printf("Sonhador");
    }
    if (formula == 2) {
        printf("Paquerador");
    }
    if (formula == 3) {
        printf("Atraente");
    }
    if (formula == 4) {
        printf("Irresistível");
    }
        

    return 0;
}