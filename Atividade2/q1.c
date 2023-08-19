/* 1. Escreva um programa que receba dois números e mostre a soma, a subtração, a multiplicação e a divisão desses números. */

#include<stdio.h>

int main(void) {

  int num1, num2, sub, mult, soma;
  int div;

  printf("Digite um numero: ");
  scanf("%d", &num1);
  printf("Digite um numero: ");
  scanf("%d", &num2);

  sub = num1 - num2;
  mult = num1 * num2;
  div = num1 / num2;
  soma = num1 + num2;

  printf("\n Resultado subtracao: %d ", sub);
  printf("\n Resultado multiplição: %d ", mult);
  printf("\n Resultado divisão: %d ", div);
  printf("\n Resultado soma: %d ", soma);
  
}

