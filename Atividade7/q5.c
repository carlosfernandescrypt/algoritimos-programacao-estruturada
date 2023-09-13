/* 5. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares. */

#include <stdio.h>

int main() {
    int num, soma = 0, cont = 0;
    printf("Informe um número:\n");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++) {
      if (i % 2 == 0) {
          soma += i;
          cont++;
          if (cont == 50) {
            break;
        }
      }
    }
  printf("%d", soma);
}
