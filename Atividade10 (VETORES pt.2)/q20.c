/* 20. escreva um programa que leia numeros inteiros no intervalo [0,50] e os armazene em um vetor com 10 posições. preencha um segundo vetor apenas com os números impares do primeiro vetor. imprima os dois vetores, 2 elementos por linha
*/

#include<stdio.h>

int main() {
    int vetor1[10];
    int vetor2[10];
    int count = 0;
    int i;

    printf("Digite 10 numeros inteiros entre 0 e 50:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }

    for (i = 0; i < 10; i++) {
        if (vetor1[i] % 2 != 0) {
            vetor2[count] = vetor1[i];
            count++;
        }
    }

    printf("Vetor1: \n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor1[i]);
        if ((i + 1) % 2 == 0) {
            printf("\n");
        }
    }

    printf("\nVetor2: \n");
    for (i = 0; i < count; i++) {
        printf("%d ", vetor2[i]);
        if ((i + 1) % 2 == 0) {
            printf("\n");
        }
    }

    return 0;
}

