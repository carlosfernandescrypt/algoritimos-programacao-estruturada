/* 3. Dadas as medidas de uma sala, informe sua área. */

#include<stdio.h>

int main(void) {

  int c, l, area;

  printf("Informe o comprimento da sala: ");
  scanf("%d", &c);
  printf("Informe a largura da sala: ");
  scanf("%d", &l);

  area = c * l;
  printf("\no comprimento da sala é: %dm²", area);
  
  
}

