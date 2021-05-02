#include <stdio.h>
#include <stdlib.h>
// variaveis globais
char opcao;
int i, n = 0, soma;
float MAv1, MAv2, media[3];
// definindo estrutura BES
typedef struct
{   
    float media, av1, av2;
    char nome[20];
    long int matricula;
}BES;
// definindo variavel do tipo estrutura
BES alunos[2];
// funcao principal
int main() {

    // rebendo dados dos alunos
   for (i = 0; i < 3; i++)
    {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", &alunos[i].nome);
        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%ld", &alunos[i].matricula);
        printf("Digite a nota da av1: ");
        scanf("%f", &alunos[i].av1);
        printf("Digite a nota da av2: ");
        scanf("%f", &alunos[i].av2);
    }
    // laco do-while para repeticao do menu
    do
    {
        //interface do menu
    printf("\n=-=-=-=--=-= Comparador de Notas =-=-=-=--=-=");
    printf("\n[ a ] Aluno com maior nota na Av1");
    printf("\n[ b ] Aluno com maior nota na Av2");
    printf("\n[ c ] Aluno com maior media geral");
    printf("\n[ d ] Sair");
    setbuf(stdin, NULL);
    // recebendo escolha do cliente
    printf("\nEscolha uma opcao: ");
    scanf("%c", &opcao);

        switch (opcao)
        {
        case 'a':
            maiorAv1(); // chamando funcao de calculo maior nota av1
            
            break;
        case 'b':
            maiorAv2(); // chamando funcao de calculo maior nota av2
            break;
        case 'c':
            mediaGeral(); // chamando funcao de calculo maior media geral
            break;
        case 'd':
            return 0; // encerrandoi o programa
            break;
        
        default:
            printf("\nOpcao invalida"); // caso a opcao escolhida nao esteja dentre os valores definidos
            break;
        }
    
    } while (opcao != 'a' || opcao != 'b' || opcao != 'c' || opcao != 'd'); // regra para continuar rodando o menu
    {
        system("Pause");
    }

    return 0;
}
// funcao para calcular maior nota av1
void maiorAv1() {
    for (i = 0; i < 3; i++)
    {
        if (alunos[i].av1 > n)\
        {
            MAv1 = alunos[i].av1;
            n = i;
        }
    }
     printf("A maior nota na AV1 eh do aluno %s", alunos[n].nome);
}
// funcao para calcular maior nota av2
void maiorAv2() {
    for (i = 0; i < 3; i++)
    {
        if (alunos[i].av1 > n)
        {
            MAv2 = alunos[i].av2;
            n = i;
            
        }
    }   
    printf("A maior nota  eh do aluno %s", alunos[n].nome);
}
// funcao para calcular maior media geral
void mediaGeral() {
    for (i = 0; i < 3; i++)
    {
        soma = alunos[i].av1 + alunos[i].av2;
        media[i] = soma / 2;
        if (media[i] > n)
        {
            n = media[i];
            n = i;
        }
    }
    printf("A maior media foi do alunp %s", alunos[n].nome);
}