#include <stdio.h>
#include <stdlib.h>

int main()
{
  int idade[10], i, cont = 0, aux = 0, aux2 = 0;
  float media, altura[10], peso[10], soma = 0, percent;

  for (i = 0; i < 10; i++)
  {
    printf("Digite a %d idade: ", i + 1);
    scanf("%d", &idade[i]);
    printf("Digite a %d altura: ", i + 1);
    scanf("%f", &altura[i]);
    printf("Digite o %d peso: ", i + 1);
    scanf("%f", &peso[i]);
    if (idade[i] > 50)
    {
      cont = cont + 1;
      if (idade[i] > 50 && idade[i] < 70)
      {
        aux = aux + 1;
        soma = soma + altura[i];
      }
    }
  }
  for (i = 0; i < 10; i++)
  {
    if (peso[i] < 50)
    {
      printf("%f", peso[i]);
      aux2 = aux2 + 1;
    }
  }
  media = soma / aux;
  percent = (aux2 * 100) / 10;
  printf("\n%d pessoas com idade maior de 50 anos", cont);
  printf("\nA media das alturas das pessoas com idade entre 50 e 70 anos eh: %.2f", media);
  printf("\n%.2f%% possuem o peso menor que 50kg", percent);
  return 0;
}