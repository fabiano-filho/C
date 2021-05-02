#include<stdio.h>

int main()
{
    char S, C, D, V, letra;


    printf("Digite uma letra para seu estado civil S/C/D/V: ");
    scanf("%c", &letra);

    if (letra == 'S' || letra == 's') {
        printf("Solteiro(a)");
    }
    else if (letra == 'C' || letra == 'c') {
        printf("Casado(a)");
    }
    else if (letra == 'D' || letra == 'd') {
        printf("Divorciado(a)");
    }
    else {
        printf("Viúvo(a)");
    }
    return 0;
}