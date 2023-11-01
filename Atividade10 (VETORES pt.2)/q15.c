/* 15. Leia um vetor com 20 números inteiros. Escreva os elemtnos do vetor eliminando elementos repetidos
*/

#include<stdio.h>
#include<math.h>

int main() {
  int vetor[20];
  int i, j, flag;

  printf("Digite 20 numeros inteiros:\n");

  for (i = 0; i < 20; i++) {
      scanf("%d", &vetor[i]);
  }

  printf("Elementos nao repetidos:\n");

  for (i = 0; i < 20; i++) {
      flag = 0;
      for (j = 0; j < i; j++) {
          if (vetor[i] == vetor[j]) {
              flag = 1;
              break;
          }
      }
      if (flag == 0) {
          printf("%d ", vetor[i]);
      }
  }

  return 0;
}
