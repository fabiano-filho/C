#include <stdlib.h>
#include <stdio.h>

int main() 
{
    float peso, formula;
    int opcao;

    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("[ 1 ]  Mercúrio\n [ 2 ] Vênus\n [ 3 ] Marte\n [ 4 ] Júpiter\n [ 5 ] Saturno\n [ 6 ] Urano\n");
    printf("Escolha um planeta abaixo para converter a massa para peso no planeta escolhido\n");
    scanf("%d", &opcao);
	    switch(opcao)
	    {
	    case 1:
	        formula = (peso/10) * 0.37;
	        printf("O peso é: %.2f", formula);
	        break;
	    case 2:
	        formula = (peso/10) * 0.88;
	        printf("O peso é: %.2f", formula);
	        break;
	    case 3:
	        formula = (peso/10) * 0.38;
	        printf("O peso é: ", formula);
	        break;
	    case 4:
	        formula = (peso/10) * 2.64;
	        printf("O peso é: %.2f", formula);
	        break;
	    case 5:
	        formula = (peso/10) * 1.15;
	        printf("O peso é: %.2f", formula);
	        break;
	    case 6:
	        formula = (peso/10) * 1.17;
	        printf("O peso é: %.2f", formula);
	        break;
	    default:
	        printf("Opção inválida");
            break;
	     
        }
    return 0;
}