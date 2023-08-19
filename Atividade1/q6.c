/* 6. Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área.  */

#include<stdio.h>

int main(void) {

  float raioCirculo, area;

  printf("Informe o raio do circulo: ");
  scanf("%f", &raioCirculo);

  area = 3.14 * (raioCirculo * 2);

  printf("Área do circulo: %f", area);
}

