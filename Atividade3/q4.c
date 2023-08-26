/* 4. Leia o peso e imprima se é menor que 60kg;; */

#include<stdio.h>

int main(void) {

  int peso;

  printf("Informe seu peso (kg): ");
  scanf("%d", &peso);
  if (peso < 60){
    printf("Você pesa menos que 60kg");
  }
  else if (peso == 60) {
    printf("Você pesa exatos 60kg");
  }
  else {
    printf("Você pesa mais que 60kg");
  }

}

