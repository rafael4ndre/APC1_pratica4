/*7-Faça um programa em C que leia uma estrutura contendo dia, mês e ano e imprima a data tanto no formato BR (dd/mm/aaaa) quanto no formato US (mm/dd/aaaa).*/

#include <stdio.h> 

struct calendario{
  int dia;
  int mes;
  int ano;
};

int main (void){
  struct calendario data1; 
  printf("Informe um dia: \n");
  scanf("%d", &data1.dia);
  printf("\n");
  printf("Informe um Mês: \n");
  scanf("%d", &data1.mes);
  printf("\n");
  printf("Informe um Ano: \n");
  scanf("%d", &data1.ano);
  printf("\n");
  
  printf("\nFormato BR: %d/%d/%d", data1.dia, data1.mes, data1.ano);
  
  printf("\nFormato US: %d/%d/%d", data1.mes, data1.dia, data1.ano);
  
  return 0; 
}
