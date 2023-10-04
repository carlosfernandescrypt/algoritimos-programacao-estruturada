#include<stdio.h>
#include<math.h>

int main() {
  int x[10], par = 0;
  for(int i = 0; i < 10; i++) {
      printf("Informe o %dº número: ", i+1);
      scanf("%d", &x[i]);
      
   }

  for(int i = 0; i < 10; i++) {
    if (i % 2 == 0) {
      par++;
    }
  }
  printf("Foram encontrados %d valores pares", par);
}

