/* 27. leia 10 numeros inteiros e armazene em um vetor. em seguida escreva os elementos que são primos e suas respectivas posições no vetor]
*/

#include <stdio.h>

int main() {
    int vetor[10];
    int i, j, primo;

    printf("Digite 10 numeros inteiros:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Numeros primos e suas posicoes:\n");

    for (i = 0; i < 10; i++) {
        primo = 1;
        for (j = 2; j < vetor[i]; j++) {
            if (vetor[i] % j == 0) {
                primo = 0;
                break;
            }
        }
        if (primo == 1) {
            printf("%d (posicao %d)\n", vetor[i], i);
        }
    }
}