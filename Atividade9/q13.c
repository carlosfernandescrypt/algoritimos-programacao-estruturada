#include<stdio.h>
#include<math.h>

int main() {
  int x[5], maior, menor, posMaior, posMenor;
  for(int i = 0; i < 5; i++) {
      printf("Inform o %dº valor: ", i+1);
      scanf("%d", &x[i]);
      if(x[i] > x[i-1]) {
        posMaior = i;
      }
      if (x[i] < x[i-1]) {
        posMenor = i;
      }
  }
  printf("\nPosição do maior valor: %d", posMaior);
  printf("\nPosição do menor valor: %d", posMenor);
}

