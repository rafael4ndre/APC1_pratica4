/*8-Faça um programa em C que leia nome e telefone de 10 contatos, e depois imprima todos os contatos no formato "nome - (telefone)".
*/


#include <stdio.h> 

struct contato{
  char nome[50];
  char telefone[15] ;
};

int main (void){
  struct contato pessoa[10]; 
  int i=0;

  for(i=0;i<10; i++){
    printf("\nDigite o nome %d:\n" ,i+1);
    scanf("%s", pessoa[i].nome);
    printf("\nDigite o telefone %d:\n" ,i+1);
    scanf("%s", pessoa[i].telefone);
  }

  printf("\n\n\n\n\n###############---Lista de Telefones---###############\n\n");
  
  for(i=0;i<10; i++){
    printf("\nNome %s - Telefone: %s\n" , pessoa[i].nome, pessoa[i].telefone);
  }
 
  return 0; 
}