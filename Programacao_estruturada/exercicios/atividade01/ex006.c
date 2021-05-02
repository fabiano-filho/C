#include <stdlib.h>
#include <stdio.h>


int main(){
	//Acento

    int anoN, anoF, id, mes, diaT, mesT, idade, dia, anoT;
    
printf("digite o dia que vc nasceu:  ");
    scanf("%i", &dia);
 printf("\ndigite o mes que vc nasceu:  ");
    scanf("%i", &mes);
printf("\ndigite seu ano de nascimento:  ");
    scanf("%i", &anoN); 
printf("\ndigite o ano atual:    ");
     scanf("%i", &anoF);
printf("\ndigite sua idade:   ");
    scanf("%i", &id);
     
     //formulas
    diaT = 365 * id;
    anoT = anoF - anoN;
    mesT =  12 * id; 
     
// Resultado

printf("\nSua idade em anos e:  %i ", anoT);
printf("\nSua idade em meses e: %i ", mesT);
printf("\nSua idade em dias e:  %i ", diaT);
printf("\nSua idade e:  %i ", id);



     
    


    

    return 0;
    system("Pause");
}