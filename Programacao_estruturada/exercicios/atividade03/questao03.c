#include <stdio.h>
#include <stdlib.h>

int main()
{
  int filhos[10], i, aux2 = 0, aux3 = 0;
  float salario[10], mediaS, mediaF, percent, maior = 0, aux = 0;

  for (i = 0; i < 10; i++)
  {
    printf("Digite o salario da pessoa %d: ", i + 1);
    scanf("%f", &salario[i]);
    printf("Digite a quantidade de filhos da pessoa %d: ", i + 1);
    scanf("%d", &filhos[i]);

    aux = aux + salario[i];
    aux2 = aux2 + filhos[i];

    if (salario[i] > maior)
    {
      maior = salario[i];
    }
  }
  for (i = 0; i < 10; i++)
  {
    if (salario[i] <= 300)
    {
      aux3 = aux3 + 1;
    }
  }

  printf("\n%.2f", aux);
  printf("\n%d", aux2);
  printf("\n%d", aux3);

  mediaS = aux / 10;
  mediaF = aux2 / 10;
  percent = (aux3 * 100) / 10;

  printf("\nA media do salario da populacao eh: %.2f", mediaS);
  printf("\nA media do numero de filhos da populacao eh: %.2f", mediaF);
  printf("\nO maior salario eh: %.2f", maior);
  printf("\nA porcentagem de pessoas que recebem o salario menor ou igual a R$300.00 eh: %.2f%%", percent);

  return 0;
}