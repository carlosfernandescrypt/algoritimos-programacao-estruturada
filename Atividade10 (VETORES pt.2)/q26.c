/* 26. faça um programa que calcule o desvio padrão de um vetor V contendo n = 10 números, onde m é a media do vetor

desvio padrao = √(1/n)  (xi − m)2
*/
#include <stdio.h>
#include <math.h>

int main() {
    float vetor[10];
    float media = 0, soma = 0, desvio_padrao = 0;
    int i;

    printf("Digite os 10 numeros do vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
        media += vetor[i];
    }

    media /= 10;

    for (i = 0; i < 10; i++) {
        soma += pow(vetor[i] - media, 2);
    }

    desvio_padrao = sqrt(soma / 10);

    printf("Desvio Padrao: %.2f\n", desvio_padrao);

    return 0;
}