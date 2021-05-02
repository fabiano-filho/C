#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    float n1, n2, n3;
    float media;
    char nome[20];
    // Recebendo o nome do aluno
    printf("Digite o seu primeiro nome: ");
    scanf("%s", nome);
    // Recebendo notas
    printf("Digite sua primeira nota: ");
    scanf("%f", &n1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &n2);
    printf("Digite sua terceira nota: ");
    scanf("%f", &n3);
    // Calculo
    media = (n1 + n2 + n3) / 3;
    // Condição
    if (media >= 7.0)
    {   
        printf("Parabens, %s! Voce foi aprovado com a media final de: %.2f", nome, media);
    }
    else if (media < 7 && media > 5)
    {
        printf("%s, voce precisa recuperar a materia, a media %.2f nao eh suficiente para aprovacao.", nome, media);
    }
    else {
        printf("Voce esta REPROVADO, %s. A media %.2f nao eh suficente para voce passar.", nome, media);
    }
    
    return 0;
}