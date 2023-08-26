/* 1. Leia a idade e imprima se a pessoa é maior de idade; */

#include<stdio.h>

int main(void) {

  int idade;

  printf("Informe sua idade: ");
  scanf("%d", &idade);

  if (idade < 18){
    printf("Você é de menor");
  }
  else {
    printf("Você é de maior");
  }



}

