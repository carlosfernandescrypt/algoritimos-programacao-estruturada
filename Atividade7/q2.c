/* 2. Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente. */

#include <stdio.h>

int main() {
    int num;
    printf("Informe um número:\n");
    scanf("%d", &num);

    for (int i = num; i != -1; i--) {
      printf("\n%d", i);
    }

}
