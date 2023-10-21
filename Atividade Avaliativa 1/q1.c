#include <math.h>
#include <stdio.h>

int main() {
  float x;
  printf("Informe o valor de x: ");
  scanf("%f", &x);

  x = (5 * x + 3) / sqrt(pow(x, 2) - 16);
  printf("%f", x);
}