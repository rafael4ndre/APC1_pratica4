/*2-Faça um programa em C que leia as notas de 10 alunos, calcule a média da turma e contabilize quantos alunos estão com a nota acima da média.*/

#include <stdio.h>

int main(void) {
  float notas[10];
  float media=0;
  int alunos;
  
  for(int i=0; i<10; i++){
    printf("Digite a nota do aluno %i:\n" ,i+1);
    scanf("%f" ,&notas[i]);  
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
