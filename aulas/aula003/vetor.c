#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont;
    int exemplo[5];
    exemplo[0] = 20;
    exemplo[1] = 22;
    exemplo[2] = 24;
    exemplo[3] = 26;
    exemplo[4] = 28;

    for (cont = 0; cont <= 4; cont++)
    {
        printf("%d\n", exemplo[cont]);
    }
    
    return 0;
}
