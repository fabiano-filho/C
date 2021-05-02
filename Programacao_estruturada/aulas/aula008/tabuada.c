#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, num;
  printf("Digite um numero: ");
  scanf("%d", &num);
  for (int i = 1; i <= 10; i++) {
    printf("%d X %2d =  %2d\n", num, i, num * i);
  }
  return 0;
}