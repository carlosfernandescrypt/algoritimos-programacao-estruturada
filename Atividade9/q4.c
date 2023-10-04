#include<stdio.h>
#include<math.h>

int main() {
  int x[8], a, b;
   for(int i = 0; i < 8; i++){
      printf("Informe o %dº número: ", i+1);
      scanf("%d", &x[i]);
      
   }
      printf("\nInforme um valor entre 0 e 8: ");
      scanf("%d", &a);
      printf("\nInforme outro valor entre 0 e 8: ");
      scanf("%d", &b);

  for(int i = 0; i < 8; i++) {
    if (i == a) {
      printf("\nVetor na posição %d: %d", a, x[i]);
    }
    if (i == b) {
      printf("\nVetor na posição %d: %d", b, x[i]);
    }
  }
  
}

