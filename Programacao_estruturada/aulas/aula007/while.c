#include <stdio.h>
#include <stdlib.h>

int main() {
  int soma = 0, par = 100;
  while(par <= 200) {
    soma = soma + par;
    par = par + 2;
  }
  printf("A soma dos pares eh: %d\n", soma);
  return 0;
}
