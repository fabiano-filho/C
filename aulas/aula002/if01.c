#include <stdio.h>
#include <stdlib.h>

int main()
{   //definindo variaveis
    int A, B, Soma;
    // entrada de dados
    printf("Digite um numero inteiro: ");
    scanf("%d", &A);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &B);
    // saida de dados
    Soma = A + B;
    printf("O valor da soma é = %d\n", Soma);
    // usando condicao
    if (Soma > 10)
    {
        printf("O valor da soma é maior que 10\n");
    }
    
    system("Pause");
    return 0;
}
