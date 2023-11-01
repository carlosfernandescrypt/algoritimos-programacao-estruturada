/* 25. faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros naturais que não são múltiplos de 7 ou que terminam com 7 */

#include <stdio.h>

int main() {
    int vetor[100];
    int count = 0;
    int number = 0;

    while (count < 100) {
        if (number % 7 != 0 && number % 10 != 7) {
            vetor[count] = number;
            count++;
        }
        number++;
    }

    printf("Vetor:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
    }


}
