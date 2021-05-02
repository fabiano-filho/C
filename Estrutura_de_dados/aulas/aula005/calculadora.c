#include <stdlib.h>
#include <stdio.h>

int tam = 2, topo = -1, valor, pilha[2];

void push(){
    if (topo == tam - 1){
        printf("\n ** Pilha cheia ** \n");
    }
    else {
        topo++;
        pilha[topo] = valor;
    }
}
void pop(){
    if (topo == -1){
        printf("\n ** Pilha vazia ** \n");
    } else {
        valor = pilha[topo];
        topo--;
    }
}
void main(){
    int operador, escolha;
    float resultado;
    
do{
    printf("-=-=-=-= Calculadora =-=-=-=-\n");
    printf("\n Escolha a operacao: \n\n[ 1 ] ADICAO\n[ 2 ] SUBTRACAO\n[ 3 ] MULTIPLICACAO\n[ 4 ] DIVISAO\n");
    printf("\nSua escolha: ");
    scanf("%d", &operador);

    if (operador > 4 || operador < 1)
    {
        printf("\nVALOR INVALIDO\n");
        return 0;
    }

    printf("\nDigite o primeiro valor para o calculo: ");
    scanf("%d", &valor);
    push();

    printf("Digite o segundo valor para o calculo: ");
    scanf("%d", &valor);
    push();
    
    if (operador == 1){
        pop();
        resultado = valor;
        pop();
        resultado = valor + resultado;
        printf("\nO resultado e: %.2f\n", resultado);
    }
    if (operador == 2){
        pop();
        resultado = valor;
        pop();
        resultado = valor - resultado;
        printf("\nO resultado e: %.2f\n", resultado);
    }
    if (operador == 3){
        pop();
        resultado = valor;
        pop();
        resultado = valor * resultado;
        printf("\nO resultado e: %.2f\n", resultado);
    }
    if (operador == 4){
        if(valor == 0){
            printf("Error");
        }
        else{
            pop();
            resultado = valor;
            pop();
            resultado = valor / resultado;
         printf("\nO resultado e: %.2f\n", resultado);
        }
    }
    printf("Para realizar outra conta digite 0 e para finalizar 1: ");
    scanf("%d", escolha);
}while( escolha == 0);    
    //return 0;    
}


