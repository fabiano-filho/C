#include <stdio.h>

// funçao troca
void troca(int *n)
{
    *n = 20;
}
// funçao main
int main()
{
    // atribuindo variavel
    int n = 10;
    // passando endereço da variavel para a funçao -> Passagem de parâmetos por REFERÊNCIA 
    troca(&n);
    // imprimindo variavel apos mudar valor na funcao troca
    printf("%d\n", n);
    
    return 0;
}