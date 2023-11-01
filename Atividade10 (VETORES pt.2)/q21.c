/* 21. faça um programa que receba do usuario dois vetores, A e B, com 10 numeros inteiros cada. crie um novo vetor denominado C calculando C = A - B. mostre na tela os dados do vetor C
*/

#include<stdio.h>


int main() {
    int vetorA[10], vetorB[10], vetorC[10];
    int i;

    printf("Digite os 10 numeros inteiros do vetor A:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetorA[i]);
    }

    printf("Digite os 10 numeros inteiros do vetor B:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetorB[i]);
    }

    for (i = 0; i < 10; i++) {
        vetorC[i] = vetorA[i] - vetorB[i];
    }

    printf("Vetor C = A - B:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetorC[i]);
    }

    return 0;
}
