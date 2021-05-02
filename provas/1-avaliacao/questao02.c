#include <stdio.h>
#include <stdlib.h>
// Função principal
int main() {
    // Definindo variáveis
    int tam, i, opcao, *m, *n, produto, soma, subtracao;
    // Alocando memória dinâmica
    m = (int*) malloc (tam * sizeof(int));
    n = (int*) malloc (tam * sizeof(int));
    
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tam);
    // Receber valores do vetor M
    for (i = 0; i < tam; i++)
    {
        printf("Digite o valor %d para o vetor M: ", i+1);
        scanf("%d", &m[i]);
    }
    // Receber valores do vetor N
    for (i = 0; i < tam; i++)
    {
        printf("Digite o valor %d para o vetor N: ", i+1);
        scanf("%d", &n[i]);
    }
    // Laço de repetição
    while ( opcao = 1 || opcao < 4)
    {
    // Interface do programa
    printf("\n-=-=-=--=- Calculadora de vetores -=-=-=--=-");
    printf("\n[ 1 ] Produto de M por N");
    printf("\n[ 2 ] Soma de M com N");
    printf("\n[ 3 ] Diferenca de M com N");
    printf("\n[ 4 ] Sair");
    printf("\nDigite sua escolha: ");
    scanf("%d", &opcao);
    // MENU
        switch (opcao) {
    case 1:
        for (i = 0; i < tam; i++)
        {
            produto = m[i] * n[i];
            printf("O produto de %d com %d eh: %d\n", m[i], n[i], produto);   
        }
        break;
    case 2:
        for (i = 0; i < tam; i++)
        {
            soma = m[i] + n[i];
            printf("A soma de %d com %d eh: %d\n", m[i], n[i], soma);
        }
        
        break;
    case 3:
        for (i = 0; i < tam; i++)
        {
            subtracao = m[i] - n[i];
            printf("A subtracao de %d com %d eh: %d\n", m[i], n[i], subtracao);
        }
        break;
    case 4:
        return 0;
        break;
    default:
        printf("\nOpcao Invalida\n");
        break;
    }  
    }
    // Liberar memória alocada
    free(m);
    free(n);
    //fim do programa
    return 0;
}