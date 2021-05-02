#include <stdio.h>
#include <stdlib.h>

//definindo variaveis globais
int valor, *pilha, tam = 8, topo = -1;
//empilhar
empilha()
{   
    if (topo == tam -1)
    {
        printf("\n ** Pilha Cheia **\n\n");
    }
    else
    {
        topo++;
        pilha[topo] = valor;
    }
}
// desempilhar
desempilha()
{
    if (topo == -1)
    {
        printf("\n ** Pilha Vazia ** \n\n");
    }
    else
    {
        valor = pilha[topo];
        topo--;
    }
}

int main()
{
    int verificar, i;
    pilha = (int*)malloc(tam * sizeof(int));    
    
    //Placas a serem selecionadas
    for (i = 0; i < 8; i++)
    {
        printf("Digite uma placa: ");
        scanf("%d", &pilha[i]);
        valor = pilha[i];
        empilha();
    }
    // numero da placa a ser verificada
    printf("Digite uma placa para verificacao: ");
    scanf("%d", &verificar);
   
    //Verificar se o carro esta no local
    for ( i = 0; i < 8; i++)
    {
        if ( verificar == pilha[i])
        {
            printf("\nO carro esta na vila");
        }
    }
    // Verificar em qual posicao esta e qual carro precisa sair para ele sair
    for ( i = 7 ; i >= 0; i--)
    {
        if ( verificar == pilha[i])
        {
            return 0;
        }
        else
        {
            printf("\nO carro na posicao %d precisa sair para o carro de placa %d sair", i+1, verificar);
        }
    }
    
    
    system("Pause");
    return 0;
    
}
