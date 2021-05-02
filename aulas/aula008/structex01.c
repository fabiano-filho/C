#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// criando uma struct
typedef struct
{
    int dia, mes, ano;
}dma;
// função principal
int main() {
    // adicionando acentuação
    setlocale(LC_ALL,"Portuguese"); 
    // adicionando variáveis do tipo struct
    dma data1, data2;
    // adicionando variáveis
    int convert1, convert2, subtracao;
    // recebendo valores para a variável data1
    printf("Digite o dia: ");
    scanf("%d", &data1.dia);
    printf("Digite o mês: ");
    scanf("%d", &data1.mes);
    printf("Digite o ano: ");
    scanf("%d", &data1.ano);
    // convertendo a data1 em dias
    convert1 = data1.dia + (data1.ano * 365) + (data1.mes * 30);
    // pulando uma linha
    printf("\n");
    // recebendo valores
    printf("Digite outro dia: ");
    scanf("%d", &data2.dia);
    printf("Digite outro mês: ");
    scanf("%d", &data2.mes);
    printf("Digite outro ano: ");
    scanf("%d", &data2.ano);
    // convertendo a data2 em dias
    convert2 = data2.dia + (data2.ano * 365) + (data2.mes * 30);
    // subtraindo data1 com data2
    subtracao = convert1 - convert2;
    // imprimindo a diferença entre elas
    printf("\nOs dias entre as datas são: %d", subtracao); 
    
    return 0;
}