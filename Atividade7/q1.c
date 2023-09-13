/* 1. Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente.  */

#include <stdio.h>

int main() {
    int num;
    printf("Informe um número:\n");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++) {
      printf("\n%d", i);
    }

}
