#include <stdio.h>
#include <stdlib.h>

// inicializaçao
void inicializar(){   
    int top = -1;
}
// Empilhar
void empilhar()
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
    if (topo == -1){
        printf("\n ** Pilha vazia ** \n");
    } else {
        valor = pilha[topo];
        topo--;
    }
}
// Acesso ao topo -> mostra o elemento do topo
void topo(){
    if (topo == -1){
        printf("\n ** Pilha vazia ** \n");
    } else {
        printf("\nElemento do topo: %d", pilha[topo]);
    }
//  Situação da pilha
isFull(){
    if (topo == -1)
    {
        printf("\n ** Pilha vazia ** \n")
    }
    else {
        if (topo == tam -1){
            printf("\n ** Pilha cheia ** \n");
        } else {
            printf("\nTotal de elementos na pilha: %d ", topo+1);
            printf("\nEspaco disponivel na pilha: %d", topo - tam);
        }
    }
}
