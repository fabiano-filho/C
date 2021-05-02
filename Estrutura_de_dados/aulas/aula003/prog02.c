#include <stdio.h>

int main()
{ 
    // atribuindo valor a variavel n
    int n = 10;
    // definindo variavel de ponteiro
    int *p;
    // atribuindo valor a varivael de ponteiro
    // para ponteiro receber valor n precisa de *
    p = &n;
    // alterando valor da variavel n com p
    *p = 20;
   // imprimindo valor de n alterado com atraves de variavel de ponteiro
   printf("%d", n);
   printf("\n%d", *p);
   printf("\n%d", p);
   
   return 0;
}
