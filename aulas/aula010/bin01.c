#include <stdio.h>
#include <stdlib.h>

void pesquisaBinaria(int nomeVetor[], int procura, int tam)
{
  int inicio = 0;
  int fim = tam - 1;
  int meio = (inicio + fim) / 2;
  int cont = 0;

  while (procura != nomeVetor[meio] && inicio != fim)
  {

    if (procura > nomeVetor[meio])
    {
      inicio = meio + 1;
    }
    else
    {
      fim = meio;
    }
    if (inicio != meio)
    {
      cont++;
    }
    meio = (inicio + fim) / 2;
  }
  if (nomeVetor[meio] == procura)
  {
    printf("\nValor encontrado\n");
    printf("Foram feitas %d pesquisas", cont);
  }
  else
  {
    printf("\nValor nao encontrado\n");
    printf("Foram feitas %d pesquisas", cont);
  }
}
// Recebe ponteiro do vetor, tamanho do vetor
void bubbleSort(int *v, int N)
{
  int i, continua, aux, fim = N;
  do
  {
    continua = 0;
    for (i = 0; i < fim - 1; i++)
    {
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
}
// Função principal
int main()
{
  // definindo variaveis
  int n;
  // definindo vetor
  int v[32] = {
      24,
      1,
      20,
      17,
      23,
      12,
      19,
      25,
      14,
      31,
      16,
      6,
      7,
      27,
      4,
      26,
      29,
      28,
      3,
      2,
      13,
      30,
      22,
      21,
      18,
      5,
      15,
      32,
      9,
      11,
      8,
      10,
  };
  // chamando funçao bubble para organizar vetor
  bubbleSort(&v[0], 32);
  // recebendo numero
  printf("Digite um numero: ");
  scanf("%d", &n);
  // chamando funcao de pesquisa para analisar numero digitado
  pesquisaBinaria(&v[0], n, 32);
  return 0;
}