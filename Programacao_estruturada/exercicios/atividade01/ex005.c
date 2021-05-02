#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C, result;
    result = (7 * C + 5 * B) / (2 * A * 3);

    printf("Digite um numero A: ");
    scanf("%d", &A);

    printf("Digite um numero B: ");
    scanf("%d", &B);

    printf("Digite um numero C: ");
    scanf("%d", &C);

    printf("O resultado da formula (7 * C + 5 * B) / (2 * A * 3), onde a = %d, b = %d e c = %d, resulta em: %d", A, B, C, result);
    
    
    
    return 0;
    system("Pause");
}