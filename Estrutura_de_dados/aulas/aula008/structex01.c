#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// criando uma struct
typedef struct
{
    int dia, mes, ano;
}dma;
// fun��o principal
int main() {
    // adicionando acentua��o
    setlocale(LC_ALL,"Portuguese"); 
    // adicionando vari�veis do tipo struct
    dma data1, data2;
    // adicionando vari�veis
    int convert1, convert2, subtracao;
    // recebendo valores para a vari�vel data1
    printf("Digite o dia: ");
    scanf("%d", &data1.dia);
    printf("Digite o m�s: ");
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
    printf("Digite outro m�s: ");
    scanf("%d", &data2.mes);
    printf("Digite outro ano: ");
    scanf("%d", &data2.ano);
    // convertendo a data2 em dias
    convert2 = data2.dia + (data2.ano * 365) + (data2.mes * 30);
    // subtraindo data1 com data2
    subtracao = convert1 - convert2;
    // imprimindo a diferen�a entre elas
    printf("\nOs dias entre as datas s�o: %d", subtracao); 
    
    return 0;
}