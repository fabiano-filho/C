#include <stdio.h>
#include <stdlib.h>

main()
{
    // defincao de variaveis
    float n1, n2, n3, media;
    // entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    // operação
    media = (n1 + n2 + n3)/3;

    printf("%f", n1);
    printf("%f", n2);
    printf("%f", n3);
    printf("%f", media);


    system("PAUSE");
}