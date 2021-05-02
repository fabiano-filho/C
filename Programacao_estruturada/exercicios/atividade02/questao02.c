#include <stdio.h>
#include <stdlib.h>

int main() {
    int operacao;
    
    printf("-=-=-=-= CAIXA ELETRÔNICO =-=-=-=-");
    printf("\n[ 1 ] Saldo");
    printf("\n[ 2 ] Extrato");
    printf("\n[ 3 ] Saque");
    printf("\n[ 4 ] Sair");
    printf("\nEscolha uma das opções: ");
    scanf("%d", &operacao);
    
    if (operacao == 1) {
        printf("Mostrar saldo");
    }
    if (operacao == 2) {
        printf("Mostrar extrato");
    }
    if (operacao == 3) {
        printf("Sacando dinheiro");
    }
    if (operacao == 4) {
        printf("Saindo... ");
    }
    



    return 0;
}