#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Pt-br");
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    switch(idade)
{
 case 5:
 case 6:
 case 7:
 printf("\nVocê está na categoria infantil A\n");
 break;
 case 8:
 case 9:
 case 10:
 printf("\nVocê está na categoria infantil B\n");
 break;
 case 11:
 case 12:
 case 13:
 printf("\nVocê está na categoria juvenil A\n");
 break;
 case 14:
 case 15:
 case 16:
 case 17:
 printf("\nVocê está na categoria juvenil B\n");
 break;
 default:
 printf("\nVocê está na categoria sênior\n");
 break;
}


    system("Pause");
    return 0;
}