 /*5-Faça um programa em C que leia uma string e a imprima em maísculo e em minúsculo. */

#include <stdio.h> 
#include <string.h>
#include <ctype.h>

int main (void) {
  char frase [31];
  int i=0; 
  printf("Informe uma frase:\n");
  memset(frase, 0, sizeof(frase));
  scanf("%[^\n]s", frase);

  for (i = 0; frase[i]!='\0'; i++){
  		if(frase[i] >= 'a' && frase[i] <= 'z'){
  			frase[i] = frase[i] -32;
		  }
  }
  printf("Maisculo: %s\n", frase);
  i=0;
  for (i = 0; frase[i]!='\0'; i++){
  		if(frase[i] >= 'A' && frase[i] <= 'Z'){
  			frase[i] = frase[i] +32;
		  }
  }
  printf("Minusculo: %s\n", frase);
  
}  