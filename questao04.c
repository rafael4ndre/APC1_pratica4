/* 4-Faça um programa em C que leia uma frase de até 30 caracteres preenchendo uma matriz 6x5 e depois imprima a matriz percorrendo coluna por coluna. */

#include <stdio.h> 
#include <string.h>

int main(void) {
  char frase[31]; 
  char matriz[6][5];
  int k=0;
  printf("Informe uma frase de até 30 caracteres\n");
  memset(frase, 0, sizeof(frase));
  memset(matriz, 0, sizeof(matriz));
  scanf("%[^\n]s", frase);
  //fgets(frase, sizeof(frase)-1, stdin);
  //frase[30]=0;
  for (int i=0; i<6; i++){
    for(int j=0; j<5; j++){
      matriz[i][j]=frase[k];
      k++;
      //printf("Char: %c posição[%d][%d]\n", frase[i][j], i, j);
    }
  }
  for (int j=0; j<5; j++){
   for(int i=0; i<6; i++){
      printf("%c", matriz[i][j]);
      //printf("Char: %c posição[%d][%d]\n", frase[i][j], i, j);
    }
  }


  printf("\n\n");
  printf("String completa: \n");
  printf("%s", matriz);
}