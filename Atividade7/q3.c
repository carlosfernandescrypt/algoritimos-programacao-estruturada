/* 3. Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares (sem usar comando condicional). */

#include <stdio.h>

int main() {
    int num;
    printf("Informe um número:\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i += 2) {
      printf("\n%d", i);
    }

}
