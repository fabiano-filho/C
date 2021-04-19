#include <stdio.h>
#include <stdlib.h>

int main()
{   //variavel
    int n = 1, fat;
    //entrada
    printf("Digite um numero: ");
    scanf("%d", &n);
    //formula
    for(fat = 1; n <=10; n = n + 1)
    {
        fat = fat * n;
        printf("O fatorial de %d é = %d\n", n, fat);
    }
    
    system("PAUSE");    
}
