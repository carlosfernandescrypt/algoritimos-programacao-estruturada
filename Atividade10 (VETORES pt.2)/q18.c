/* 18. faça um programa que leia um vetor de 10 numeros. leia um numero x. conte os multiplos de um numero inteiro x num vetor e mostre-os na tela 
*/
#include<stdio.h>

int main() {
    int vetor[10];
    int x, i, count;

    printf("Digite os 10 numeros do vetor:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite um numero x:\n");
    scanf("%d", &x);

    count = 0;

    for (i = 0; i < 10; i++) {
        if (vetor[i] % x == 0) {
            count++;
            printf("%d ", vetor[i]);
        }
    }

    printf("\nTotal de multiplos de %d: %d\n", x, count);

}
