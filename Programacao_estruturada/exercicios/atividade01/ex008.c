#include <stdlib.h>
#include <stdio.h>

int main()
{
    int custo, impostos, valorinicial;

    printf("Digite o valor do produto: ");
    scanf("%d", &custo);
    valorinicial = custo + ((0.73*custo));

    printf("O valor do carro eh: %d", valorinicial);

    return 0;
    system("Pause");
}