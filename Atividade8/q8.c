#include<stdio.h>
#include<math.h>

int main() {
  int x[6];
  for(int i = 0; i < 6; i++) {
      printf("Informe o %dº número: ", i+1);
      scanf("%d", &x[i]);
  }
  for(int i = 6; i != 0; i--) {
    printf("\n%d", i);
  }
}

