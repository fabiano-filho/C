#include <stdio.h>
#include <stdlib.h>

main()
{
    // defincao de variaveis
    float n1, n2, n3, media;
    // entrada de dados

    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    media = (n1 + n2 + n3)/3;

    printf("%f", n1);
    printf("%f", n2);
    printf("%f", n3);
    printf("%f", media);


    system("PAUSE");
}