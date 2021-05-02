#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float valor, calculo;
  char compra;
  printf("\na - Lider");
  printf("\nb - Magazan");
  printf("\n\nEm qual voce vai comprar o produto? ");
  scanf("%c", &compra);
  if (compra == 'a')
  {
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    calculo = (valor * 0.25) + valor;
    printf("\nO valor com o acrescimo de 25 porcento fica %.2f\n", calculo);
  }
  else if (compra == 'b')
  {
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    calculo = valor - (valor * 0.15);
    printf("\nO valor com o desconto de 15 porcento fica %.2f\n", calculo);
  }
  else
  {
    printf("opcao invalida");
  }

  return 0;
}