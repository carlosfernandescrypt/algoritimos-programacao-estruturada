/* 15. Faça um programa que leia um vetor de 5 posições para numeros reais e, depois, um codigo inteiro, se o codigo for zero, finalize o programa, se for 1, mostre o vetor na ordem direta, se for 2, mostre o vetor na ordem inversa, caso o codigo for diferente de 1 e 2, escreva uma mensagem informando que o código é invalido
*/
#include <stdio.h>

int main() {
    float vetor[5];
    int codigo, i;

    printf("Digite os 5 numeros reais:\n");
    for (i = 0; i < 5; i++) {
        scanf("%f", &vetor[i]);
    }

    printf("Digite o codigo (0, 1 ou 2):\n");
    scanf("%d", &codigo);

    switch (codigo) {
        case 0:
            printf("Programa finalizado.\n");
            break;
        case 1:
            printf("Vetor na ordem direta:\n");
            for (i = 0; i < 5; i++) {
                printf("%f ", vetor[i]);
            }
            break;
        case 2:
            printf("Vetor na ordem inversa:\n");
            for (i = 4; i >= 0; i--) {
                printf("%f ", vetor[i]);
            }
            break;
        default:
            printf("Codigo invalido.\n");
    }

    return 0;
}