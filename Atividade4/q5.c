/* Construir um algoritmo que leia um número e imprima se ele é igual a 5, a 200, a 400, se está no intervalo entre 500 e 1000, ou se ela está fora dos escopos anteriores.  */

#include <stdio.h>

int main() {
    int num;
    printf("Digite um número:\n");
    scanf("%d", &num);
    if (num == 5) {
      printf("Número igual a 5");
    }
    else if (num == 200) {
      printf("Número igual a 200");
    }
    else if (num == 400) {
      printf("Número igual a 400");
    }
    else if (num >= 500 && num <= 1000) {
      printf("Número entre 500 e 1000");
    }
    else {
      printf("Número fora dos escopos");
    }

}
