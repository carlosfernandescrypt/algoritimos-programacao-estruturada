#include<stdio.h>
#include<math.h>

int main() {
  int x[6];
  for(int i = 0; i < 6; i++) {
      printf("Informe o %dº número par: ", i+1);
      scanf("%d", &x[i]);
      if (x[i] % 2 != 0) {
        printf("O número informado não é par!\n");
        i--;
      }
  }
  for(int i = 5; i >= 0; i--) {
    printf("\n%d", x[i]);

  }
}

