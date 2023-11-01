/* 23. ler dois conjuntos de numeros reais, armazenando-os em vetores e calcular o produto escalar entre eles. os conjuntos tem 5 elemtnos cada. imprimir os dois conjuntos e o produto escalar, sendo que o produto escalar é dado por: x1 * y1 + x2 * y2 + ... + xn * yn
*/

#include <stdio.h>

int main() {
    float vetor1[5], vetor2[5];
    int i;
    float produto_escalar = 0;

    printf("Digite os 5 numeros reais do primeiro vetor:\n");
    for (i = 0; i < 5; i++) {
        scanf("%f", &vetor1[i]);
    }

    printf("Digite os 5 numeros reais do segundo vetor:\n");
    for (i = 0; i < 5; i++) {
        scanf("%f", &vetor2[i]);
    }

    printf("Primeiro vetor: ");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", vetor1[i]);
    }

    printf("\n");

    printf("Segundo vetor: ");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", vetor2[i]);
    }

    printf("\n");

    for (i = 0; i < 5; i++) {
        produto_escalar += vetor1[i] * vetor2[i];
    }

    printf("Produto escalar: %.2f\n", produto_escalar);

    return 0;
}