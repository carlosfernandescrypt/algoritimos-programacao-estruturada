/* 4. Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0. */

#include <stdio.h>

int main() {
    int num;
    printf("Informe um número:\n");
    scanf("%d", &num);

    for (int i = 3; i <= num; i += 3) {
      printf("\n%d", i);
      if (i == 18) {
        break;
      }
    }

}
