#include<stdio.h>
#include<math.h>

int main() {
  int x[5], maior = 0, menor = 0, media = 0, cont = 0;
  for(int i = 0; i < 5; i++) {
      printf("Inform o %dº valor: ", i+1);
      scanf("%d", &x[i]);
      media += x[i];
      cont++;
      if(x[i] > x[i-1]) {
        maior = x[i];
      }
      if (x[i] < x[i-1]) {
        menor = x[i];
      }
  }
  printf("\nMaior valor: %d", maior);
  printf("\nMenor valor: %d", menor);
  printf("\nMédia dos valores: %d", media/cont);
}

