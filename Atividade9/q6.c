#include<stdio.h>
#include<math.h>

int main() {
  int x[10], maior, menor;
  for(int i = 0; i < 10; i++) {
      printf("Informe o %dº número: ", i+1);
      scanf("%d", &x[i]);
      if(x[i] > x[i-1]) {
        maior = x[i];
      }
      if (x[i] < x[i-1]) {
        menor = x[i];
      }

   }
  printf("\nMenor valor: %d", menor);
  printf("\nMaior valor: %d", maior);
}


