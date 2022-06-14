/*9-Faça um programa em C que leia matricula e email de 10 alunos, e depois localize o email do aluno a partir de uma matrícula lida.*/

#include <stdio.h> 
#include <string.h>

struct aluno{
  char matricula[25];
  char email[60] ;
};

int main (void){
  struct aluno alunos[10]; 
  char buscar[25];
  int i=0;

  for(i=0;i<10; i++){
    printf("\nDigite a matricula %d:\n" ,i+1);
    scanf("%s", alunos[i].matricula);
    printf("\nDigite o email %d:\n" ,i+1);
    scanf("%s", alunos[i].email);
  }

  //printf("\n\n\n\n\n###############---Lista de Telefones---###############\n\n");
  memset(buscar, 0, sizeof(buscar));

  printf("Digite a matricula que deseja buscar:\n");
  
  scanf("%s", buscar);
  //printf("%s", buscar);
  //printf("%s", alunos[0].matricula);
  for(i=0;i<10; i++){
    if(strcmp(buscar,alunos[i].matricula)==0)
      printf("\nO email do aluno %s é %s\n" , alunos[i].matricula, alunos[i].email);
  }
 
  return 0; 
}