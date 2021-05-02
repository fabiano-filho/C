#include <stdio.h>
#include <stdlib.h>

// Recebe ponteiro do vetor, tamanho do vetor
void bubbleSort(int *v, int N)
{
  int i, continua, aux, fim = N, cont = 0;
  do
  {
    continua = 0;
    for (i = 0; i < fim - 1; i++)
    {
      if (aux = v[i + 1])
      {
        cont++;
      }
      if (v[i] > v[i + 1])
      {
        aux = v[i];
        v[i] = v[i + 1];
        v[i + 1] = aux;
        continua = i;
      }
    }
    fim--;
  } while (continua != 0);
  printf("Fizemos %d comparacoes\n", cont);
}
int main()
{
  int v[5], i;
  // Recebendo valores pelo teclado
  for (i = 0; i < 5; i++)
  {
    printf("Digite um numero: ");
    scanf("%d", &v[i]);
  }
  bubbleSort(&v[0], 5); // chama função para organizar o vetor
  for (i = 0; i < 5; i++)
  {
    printf("%d", v[i]); // imprime o vetor
  }
  return 0;
}