#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, somaP = 0, somaI = 0, i;
  for (int i = 0; i < 10; i++)
  {
    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
      somaP = somaP + num;
    }
    else
    {
      somaI = somaI + num;
    }
  }
  printf("\n A soma dos numeros pares eh: %d\n", somaP);
  printf("\n A soma dos numeros impares eh: %d\n", somaI);
  return 0;
}