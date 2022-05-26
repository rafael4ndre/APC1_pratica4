/*3-Faça um programa em C que leia a quantidade e o preço de 10 produtos de um nota fiscal e imprima o valor total de cada produto e o valor total da nota.*/

#include <stdio.h>

int main(void) {
  float produtos[10][2];
  float total=0;
  
  for(int i=0; i<10; i++){
    for(int j=0; j<2; j++){
      printf("Digite a quantidade e o preço do produto %i:\n" ,i+1);
      scanf("%f %f" ,&produtos[i][j]);  
    }
    media+=notas[i];
  }
  media=media/10;

  printf("A media da turma é %.2f" ,media);
  
  for(int i=0; i<10; i++){
    if(notas[i]>media){
      alunos++;
    }
  }

  printf("\n%d alunos ficaram acima da média" ,alunos);
  
}
