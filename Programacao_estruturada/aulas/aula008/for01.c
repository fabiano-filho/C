#include <stdio.h>
#include <stdlib.h>

int main() {
  int cont;
  float soma = 0, num, media;
  for (int i = 0; i < 3; i++) {
    printf("Digite um numero: ");
    scanf("%f", &num);
    soma = soma + num;
  }
  media = soma / 3;
  printf("%.2f", soma);

  return 0;
}