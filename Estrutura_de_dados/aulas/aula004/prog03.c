//#include <stdio.h>
#include <stdlib.h>


int main()
{
    //definiçoes de variaveis e ponteiro
    int a, *pa;
    double b, *pb;
    char c, *pc;

    //atribuiçoes de endereço
    pa = &a;
    pb = &b;
    pc = &c;

    //atribuiçao de valores
    a = 1;
    b = 2.34;
    c = '@';
    printf("\n valores: %d, %.2f, %c", a, b, c);
    printf("\n ponteiros: %d, %2.f, %c", *pa, *pb, *pc);
    printf("\n enderecos: %p, %p, %p", pa, pb, pc);

    //mais atribuiçoes de valores usando ponteiros
    *pa = 77;
    *pb = 0.33;
    *pc = '#';
    printf("\n valores: %d, %.2f, %c", a, b, c);
    printf("\n ponteiros: %d, %2.f, %c", *pa, *pb, *pc);
    printf("\n enderecos: %p, %p, %p", pa, pb, pc);

    return(0);
    system("PAUSE");
}