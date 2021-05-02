#include <stdio.h>
#include <stdlib.h>

// Variáveis globais
char valor, *pilha;
int tam, topo = -1;
// Empilha
empilha() {   
    if (topo == tam -1) {
        printf("\n ** Pilha Cheia **\n\n");
    }
    else {
        topo++;
        pilha[topo] = valor;
    }
}
// Desempilhar
desempilha() {
    if (topo == -1) {
        printf("\n ** Pilha Vazia ** \n\n");
    }
    else {
        valor = pilha[topo];
        topo--;
    }
}
// Função principal
int main() {
    // Atribuindo variaveis locais
    int i;
    
    // Alocação de memória dinâmica 
    pilha = (char*) malloc (tam * sizeof(char));
   
   // Entrada de dados 
    printf("\nDigite o tamanho de sua frase: ");
    scanf("%d", &tam);
    printf("\nDigite uma frase letra por letra (considere espacos)\n");
    
    // Verificando letra por letra digitada
    for (i = 0; i < tam; i++) {
    
    // limpando teclado
        setbuf(stdin, NULL);
        printf("Digite a %d letra: ", i);
        scanf("%c", &valor);
        empilha();
    }
    // Imprimindo mensagem
    printf("A frase digitada invertida eh: \n");
    // Desempilhando e imprimindo valores do topo
    for (i = tam -1; i >= 0; i--) {
        printf("%c", pilha[i]);
        desempilha();
    }
    
    // Limpando memória alocada
    free(pilha);
    return 0;
}