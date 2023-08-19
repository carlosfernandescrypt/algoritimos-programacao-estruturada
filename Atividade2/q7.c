/* 7. Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.  */

#include<stdio.h>

int main(void) {

  int anos, meses, dias, idadeTotal;

  printf("Quantos anos você tem? ");
  scanf("%d", &anos);
  printf("Agora informe em meses contando somente deste ano (Pegue o mês em que você nasceu e subtraia pelo mês atual. Ex: Março (3) - Agosto (8) = 5): ");
  scanf("%d", &meses);
  printf("Agora informe em dias contando a partir deste mês: ");
  scanf("%d", &dias);

  idadeTotal = (anos * 365) + (meses * 30) + dias;

  printf("Sua idade total em dias é: %d", idadeTotal);
}

