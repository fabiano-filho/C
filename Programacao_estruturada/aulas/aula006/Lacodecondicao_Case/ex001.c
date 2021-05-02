#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota;
    char nome[20];
    printf("Nome: ");
    scanf("%s", nome);
    printf("Nota: ");
    scanf("%d", &nota);

    switch (nota)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("\n Mau");
        break;
    case 6:
    case 7:
    case 8:
    case 9:
        printf("\n insuficiente");
        break;
    case 10:
    case 11:
    case 12:
    case 13:
        printf("\nSufciente");
        break;
    case 14:
    case 15:
    case 16:
    case 17:
        printf("\nBom");
        break;
    case 18:
    case 19:
    case 20:
        printf("\nMuito bom");
        break;
    default:
        printf("\nFora do intervalo de notas");
        break;
    }
    printf("\nNome: %s", nome);
    printf("\nNota: %d\n", nota);
    
    system("Pause");
    return 0;
}