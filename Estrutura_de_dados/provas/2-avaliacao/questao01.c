#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// definindo struct
typedef struct
{
  int qntd;
  int codigo;
  char nome[15];
  float preco;

} estoque;
// definindo variavel tipo struct
estoque verificar[5];
// funcao principal
int main()
{
  // definindo variaveis
  int i, cod, confirm = 0, qtd, name = 0;
  float valor;
  // atribuindo valor para vetor codigo
  verificar[0].codigo = 11;
  verificar[1].codigo = 12;
  verificar[2].codigo = 13;
  verificar[3].codigo = 14;
  verificar[4].codigo = 15;
  // atribuindo valor para vetor quantidade
  verificar[0].qntd = 3;
  verificar[1].qntd = 5;
  verificar[2].qntd = 2;
  verificar[3].qntd = 9;
  verificar[4].qntd = 6;
  // atribuindo valor para vetor nome
  strcpy(verificar[0].nome, "Iphone X");
  strcpy(verificar[1].nome, "Poco X3");
  strcpy(verificar[2].nome, "Iphone 12");
  strcpy(verificar[3].nome, "Airdots");
  strcpy(verificar[4].nome, "Jbl Partbox");
// atribuindo valor para vetor preço
  verificar[0].preco = 7000.00;
  verificar[1].preco = 1700.00;
  verificar[2].preco = 9300.00;
  verificar[3].preco = 90.36;
  verificar[4].preco = 2079.00;
// laco de repetiçao while
  while (cod != 0)
  {
    printf("\nDigite o codigo do produto: ");
    scanf("%d", &cod);
    // para o programa caso o cliente digite 0
    if (cod == 0)
    {
      return 0;
      ;
    }
    // laco de repetiçao for para verificacao de estoque
    for (i = 0; i < 5; i++)
    {
      // compara se o cod digitado esta no estoque
      if (cod == verificar[i].codigo)
      {
        confirm = 1;
        name = i;
        printf("Produto disponivel");
      }
    }
    // se o cod estiver no estoque
    if (confirm == 1)
    {
      printf("\nQual a quantidade? ");
      scanf("%d", &qtd);
      // se exitir a quantidade desejada no estoque
      if (qtd <= verificar[name].qntd)
      {
        verificar[name].qntd = verificar[name].qntd - qtd;
        valor = verificar[name].preco * qtd;
        printf("\n%d %s irao custar %.2f", qtd, verificar[name].nome, valor);
        confirm = 0;
      }
      // se nao existir mostra a mensagem e reinicia o laço
      else
      {
        printf("\nEstoque indisponivel para essa quantidade.");
        confirm = 0;
      }
    }
    // caso o cod digitado nao exista no estoque
    else
    {
      printf("\nProduto indisponivel");
    }
  }
  return 0;
}