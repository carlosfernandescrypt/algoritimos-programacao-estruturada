/* 4. Dado um valor em reais e a cotação do dólar, converta esse valor para dólares. */

#include<stdio.h>

int main(void) {

  float valor, dolar, resultado;

  printf("Informe o valor a ser convertido: ");
  scanf("%f", &valor);
  printf("Informe a atual cotação do dolar: ");
  scanf("%f", &dolar);

  resultado = valor / dolar;
  printf("\no valor informado em dolar é %f$: ", resultado);

}

