/* 15. Leia um vetor de 10 posições e atribua valor 0 para todos os elemtnos que possuírem valores negativos
*/
#include <stdio.h>

int main() {
  int vetor[10];
  int i;
  for(i = 0; i < 10; i++){
    printf("Digite um valor: ");
    scanf("%d", &vetor[i]);
    if(vetor[i] < 0) {
      vetor[i] = 0;
    }
    printf("Vetor[%d] = %d\n", i, vetor[i]);
  }
}