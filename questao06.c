/*6-Faça um programa em C que leia um verbo e imprima a conjugação no presente do indicativo caso ele termine em AR (ex.: PROGRAMAR, EU PROGRAMO, TU PROGRAMAS, ELE PROGRAMA, NÓS PROGRAMAMOS, VÓS PROGRAMAIS E ELES PROGRAMAM).*/

#include <stdio.h>
#include <string.h>


int main(void){
  char palavra[20];
  int n;
  
  char eu[2]={'o'};
  char tu[3]={'a','s'};
  char ele[2]={'a'};
  char nos[5]={'a','m','o','s'};
  char vos[4]={'a','i','s'};
  char eles[3]={'a','m'};

  printf("Infome o verbo a ser conjugado:\n");
  scanf("%s", palavra);  
  n=strlen(palavra);


  if(palavra[n-2]=='a' && palavra[n-1]=='r'){
    palavra[n-2]='\0';
    printf("Eu %s%s\n",palavra,eu);
    printf("Tu %s%s\n",palavra,tu);
    printf("Ele %s%s\n",palavra,ele);
    printf("Nos %s%s\n",palavra,nos);
    printf("Vos %s%s\n",palavra,vos);
    printf("Eles %s%s\n",palavra,eles);
  }else
    printf("Palavra não terminada em ar");

  return 0;  
}