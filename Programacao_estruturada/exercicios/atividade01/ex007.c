#include<stdio.h>
#include<stdlib.h>

int main()
{
int n, hora, valorh, filho, sal, d;
float  salario;

    printf("Digite o numero do funcionario: ");
	scanf("%d", &n);
    printf("Digite o total de horas trabalhadas diariamente: ");
	scanf("%d", &hora);
	printf("Digite o total de dias trabalhados no mes: ");
	scanf("%d", &d);
	printf("Digite o valor das horas: ");
	scanf("%d", &valorh);
	printf("Digite a quantidade de filhos menores de 14 anos: ");
	scanf("%d", &filho);

	sal=hora*valorh*d;
	salario= (sal*0.1*filho)+sal;

	 printf("\nFuncionario numero: %d", n);
     printf("\nSalario valor: R$%.2f\n", salario);
     
     
system("pause");
}