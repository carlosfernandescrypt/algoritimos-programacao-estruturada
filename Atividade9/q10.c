#include<stdio.h>
#include<math.h>

int main() {
  float x[15], media = 0;
  for(int i = 0; i < 15; i++) {
      printf("Inform a %dº nota: ", i+1);
      scanf("%f", &x[i]);
      media += x[i];
  }
  media /= 15;
  printf("Média geral: %f", media);
}

