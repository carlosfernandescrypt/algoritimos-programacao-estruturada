#include<stdio.h>
#include<math.h>

int main() {
  float x[10], negativos = 0, soma = 0;
  for(int i = 0; i < 10; i++) {
      printf("Inform o %dº valor: ", i+1);
      scanf("%f", &x[i]);
      if (x[i] < 0) {
        negativos++;
      }
      else if (x[i] > 0) {
        soma += x[i];
      }
  }
  printf("\nQuantidade de números negativos: %f", negativos);
  printf("\nSoma dos números positivos: %f", soma);
}

