/* Escreva um algoritmo que leia um número e imprima a raiz quadrada do número caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo. */
#include <stdio.h>
#include <math.h>
int main(void) {
  float num, result;

  printf("Informe um número: ");
  scanf("%f", &num);

  if (num >= 0) {
    result = sqrt(num);
    printf("%f", result);
  }
  else if (num < 0) {
    result = pow(num, 2);
    printf("%f", result);
  }
  else {
    printf("Não é um número");
  }
}