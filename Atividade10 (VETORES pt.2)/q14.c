#include<stdio.h>
#include<math.h>

int main() {
  int x[10], contador = 0;
  int ig[10];
  for(int i = 0; i < 10; i++) {
      printf("Inform o %dº valor: ", i+1);
      scanf("%d", &x[i]);
  }
  for(int i = 0; i < 10; i++) {
    for(int j = i + 1; j < 10; j++) {
      if(x[i] == x[j]) {
        printf("\n%d", x[i]);
      }
    }
  }
}

