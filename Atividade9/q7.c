#include<stdio.h>
#include<math.h>

int main() {
  int x[10], maior, pos;
  for(int i = 0; i < 10; i++) {
      printf("Informe o %dº número: ", i+1);
      scanf("%d", &x[i]);
      if(x[i] > x[i-1]) {
        maior = x[i];
        pos = i;
      }

   }
  for(int i = 0; i < 10; i++) {
    printf("\n%d", x[i]);
  }
  printf("\nMaior valor: %d", maior);
  printf("\nPosição: %d", pos);
}


