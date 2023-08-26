/* 3. Leia a altura e imprima se é maior que 1.8m; */

#include<stdio.h>

int main(void) {

  int altura;

  printf("informe sua altura em cm (Ex: 178): ");
  scanf("%d", &altura);

  if (altura < 180){
    printf("Você é menor que 1.8m");
  }
  else if (altura == 180) {
    printf("Você tem exatos 1.8m");
  }
  else {
    printf("Você é maior que 1.8m");
  }



}

