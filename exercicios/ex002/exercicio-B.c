#include <stdio.h>
#include <stdlib.h>

//definindo variaveis globais
int topo = -1, pilha[5], tam = 5, valor;
// inicializar a pilha
inicializar()
{
    topo = -1;
}
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
// verificar o topo
top()
{
    if (topo == -1)
    {
        printf("\n** Pilha Vazia **\n\n");
    }
    else
    {
        printf("\nElemento do topo: %d\n", pilha[topo]);
    }
    
}
// verificar elementos da pilha
isFull()
{
if (topo == -1)
    {
        printf("\n ** Pilha vazia ** \n\n");
    }
    else {
        if (topo == tam -1){
            printf("\n ** Pilha cheia ** \n");
        } else {
            printf("\nTotal de elementos na pilha: %d ", topo + 1);
            printf("\nEspaco disponivel na pilha: %d\n\n", tam - topo -1);
        }
    }
}
// Funçao principal
int main()
{
    int opcao;
    //conferindo o programa
    while ( opcao = 1 || opcao <6)
    {
    //interface de menu
    printf("=-=-=-=-=-=-=-=-=-=-Pilhas=-=-=-=-=-=-=-=-=-=-");
    printf("\n[ 1 ] inicializar a pilha");
    printf("\n[ 2 ] Inserir um valor na pilha");
    printf("\n[ 3 ] Remover um valor da pilha");
    printf("\n[ 4 ] Mostrar o elemento do topo da pilha");
    printf("\n[ 5 ] Mostrar situacao da pilha");
    printf("\n[ 6 ] Sair");
    printf("\nEscolha uma opcao: ");
    //ler a escolha do cliente
    scanf("%d", &opcao);
    // MENU
        switch (opcao)
    {
    case 1:
        inicializar();
        printf("\nPilha inicializada\n\n");
        break;
    case 2:
        printf("Digite um valor: ");
        scanf("%d", &valor);
        printf("\nvalor %d adicionado a pilha.\n\n", valor);
        empilha();
        break;
    case 3:
        desempilha();
        break;
    case 4:
        top();
        break;
    case 5:
        isFull();
        break;
    case 6:
        return 0;
        break;
    
    default:
        printf("Opcao invalida\n\n");
        break;
    }
    }
    
    
    

//fimprog
    return 0;
}