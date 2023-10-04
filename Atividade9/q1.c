#include<stdio.h>
#include<math.h>

int main() {
  int A[6] = {1, 0, 5, -2, -5, 7}, soma = 0;
  soma = A[0] + A[1] + A[5];
  printf("Soma: %d", soma);
  A[4] = 100;

  printf("\n%d", A[0]);
  printf("\n%d", A[1]);
  printf("\n%d", A[2]);
  printf("\n%d", A[3]);
  printf("\n%d", A[4]);
  printf("\n%d", A[5]);
  
}

