#include <stdio.h>
#include <stdlib.h>

int valor, topo = -1, *pilha, tam = 8;

// Empilhar
void empilha()
{
    if (topo == tam - 1){
        printf("\n ** Pilha cheia ** \n");
    }
    else {
        topo++;
        pilha[topo] = valor;
    }
}
// Desempilha
void desempilha(){
    if (topo == -1)
    {   
        printf("\n ** Pilha vazia ** \n");
    } 
    else 
    {
        valor = pilha[topo];
        topo--;
    }
}
int main()
{
    int pilha[8], i, verificar = 0;
    for ( i = 0; i < tam; i++)
    {
        printf("Digite uma placa: ");
        scanf("%d", &pilha[i]);
    }
    if ( pilha[i] == 0)
    {
        return 0; 
    }
    // Verificar se estar
    else{
        printf("Verificar se o carro esta na vila: ");
        scanf("%d", &verificar);
        for (i = 0; i < tam; i++)
        {
            if ( verificar == pilha[i])
            {
                verificar = i;
                desempilha();
            }
            else
            {
                printf("O carro nao esta na vila");
                return 0;
            }
        }
        for (i = 0; i < tam; i++)
        {
            printf("\n%d\n", pilha[i]);
        }
    }
}