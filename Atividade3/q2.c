/* 2. Leia o salário e imprima se ganha mais que o mínimo; */

#include<stdio.h>

int main(void) {

  int salario;

  printf("Informe seu salário: ");
  scanf("%d", &salario);

  if (salario < 1320){
    printf("Você ganha menos que o mínimo");
  }
  else if (salario == 1320) {
    printf("Você ganha o mínimo");
  }
  else {
    printf("Você ganha mais que o mínimo");
  }



}

