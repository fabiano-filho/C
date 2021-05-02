#include <stdio.h>
#include <stdlib.h>

typedef struct {
int cod;
char nome[30];
float txcap;
int level, vida, atq, def;
int paralis;
} DadosMonstro; // Associando "DadosMonstro" à definição da struct

int main() {
int i;
DadosMonstro pikachu, chikorita; // não precisa de struct antes, pois foi declarado typedef.
DadosMonstro pokemon[3]; // array de struct
// Recebendo dados de vetores
for (i = 0; i < 3; i++) {
printf("Digite o nome do pokemon %d: ", i + 1);
scanf("%s", pokemon[i].nome);
printf("Digite o level do pokemon %s: ", &pokemon[i].nome);
scanf("%d", &pokemon[i].level);
}
// Imprimindo os dados dos vetores
for (i = 0; i < 3; i++) {
printf("\nO pokemon %s tem level %d\n", pokemon[i].nome, pokemon[i].level);
}
// Recebendo dados utilizando variaveis simples
printf("Digite o nome do pokemon: ");
scanf("%s", &pikachu.nome);
printf("Digite o nivel do pokemon %s: ",pikachu.nome);
scanf("%d", &pikachu.level);
printf("\nO pokemon %s tem level %d\n", pikachu.nome, pikachu.level);
return 0;
}