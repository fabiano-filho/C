#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, n4, mediaponde;
    
    
    printf("Digite um numero inteiro: \n");
    scanf("%d", &n1);
    printf("Digite um numero inteiro: \n");
    scanf("%d", &n2);
    printf("Digite um numero inteiro: \n");
    scanf("%d", &n3);
    printf("Digite um numero inteiro: \n");
    scanf("%d", &n4);
    
    mediaponde = (n1 * 1 + n2 * 2 + n3 * 3 + n4 * 4) / 1 + 2 + 3 + 4;

    printf("A media ponderada dos numeros %d, %d, %d, %d eh: %d", n1, n2, n3, n4, mediaponde);

    return(0);
}