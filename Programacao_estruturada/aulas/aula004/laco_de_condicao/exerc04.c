#include <stdlib.h>
#include <stdio.h>

int main()
{
    
    char sexo[21];

    printf("Qual seu sexo? ");
    scanf("%c", &sexo);

    if ( strcmp(sexo, 'Feminino')==0 ||strcmp(sexo,'feminino')==0 || strcmp(sexo, 'Masculino')==0 || strcmp(sexo, 'masculino')==0)
    {
        printf("\nsexo valido");
    }
    else
    {
        printf("\nsexo invalido");
    }
    

    return 0;
}