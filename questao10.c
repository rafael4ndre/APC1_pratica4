  /*  10-Faça um programa em C que leia o número de mês, valide o número com os meses definidos por uma enumeração e imprima o nome do mês.*/

#include <stdio.h>

enum meses{janeiro=1, fevereiro=2, marco=3, abril=4, maio=5, junho=6, julho=7, agosto=8, setembro=9, outubro=10, novembro=11, dezembro=12};

int main (void){
  int ler=0;
  enum meses mes; 
 

   const char *nomeMes[] = { "", "Janeiro", "Fevereiro", "Marco", 
      "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro",
      "Novembro", "Dezembro" 
    };

  printf("Informe o número do mês:\n");
  scanf("%d", &ler);

   for (enum meses mes = janeiro; mes <= dezembro; ++mes) {
       if(ler==mes){ 
         printf("%2d%11s\n", mes, nomeMes[mes]);
         }
    } 

  
  

  

  
  
}