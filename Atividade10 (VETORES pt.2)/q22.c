/* 22. faça um programa que leia dois vetores de 10 posições e calcule outro vetor contendo, nas posições pares os valores do primeiro e nas posições impares os valores do segundo.
*/

#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], vetor3[10 * 2];
    int i, j = 0;

    printf("Digite os 10 numeros inteiros do primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os 10 numeros inteiros do segundo vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]);
    }

    for (i = 0; i < 10; i++) {
        vetor3[j++] = vetor1[i];
        vetor3[j++] = vetor2[i];
    }

    printf("Vetor resultante:\n");
    for (i = 0; i < 10 * 2; i++) {
        printf("%d ", vetor3[i]);
    }

}
