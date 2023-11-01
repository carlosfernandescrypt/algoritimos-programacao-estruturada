/* 28 leia 10 numeros inteiros e armazene em um vetor v0. crie dois novos vetores v1 e v2. copie os valores impares de v0 para v1 e os valores pares de v0 para v2. note que cada um dos vetores v1 e v2 tem no maximo 10 elementos, mas nem todos os elemtnos são utilizados. no final escreva os elemtnos UTILIZADOS de v1 e v2
*/

#include <stdio.h>

int main() {
    int v0[10], v1[10], v2[10];
    int count_v1 = 0, count_v2 = 0;
    int i;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &v0[i]);
    }

    for (i = 0; i < 10; i++) {
        if (v0[i] % 2 != 0) {
            v1[count_v1] = v0[i];
            count_v1++;
        } else {
            v2[count_v2] = v0[i];
            count_v2++;
        }
    }

    printf("Elementos UTILIZADOS do vetor v1:\n");
    for (i = 0; i < count_v1; i++) {
        printf("%d ", v1[i]);
    }
    printf("\n");

    printf("Elementos UTILIZADOS do vetor v2:\n");
    for (i = 0; i < count_v2; i++) {
        printf("%d ", v2[i]);
    }
    printf("\n");

}