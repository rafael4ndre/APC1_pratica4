/*1-Faça um programa em C que preencha uma matriz com 10 números, depois leia um número e localize a posição dele na matriz.*/

#include <stdio.h>

int main(void) {
  int matriz[10];
  int valor;
  for(int i=0; i<10; i++){
    printf("Digite um valor :\n");
    scanf("%d" ,&matriz[i]);
    
  }

  printf("\nDigite o numero que deseja buscar: ");
  scanf("%d" ,&valor);

  for(int i=0; i<10; i++){
    if(matriz[i]==valor){
      printf("\nO valor %d foi encontrado na posição %d. \n" ,valor ,i+1);
    }
  }
  
}
