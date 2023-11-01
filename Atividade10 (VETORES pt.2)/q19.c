/* 19. faça um vetor de tamanho 50 preenchido com o seguinte valor (i+5*i)%(i+1) sendo i a posição do elemntor no vetor. em seguida imprima o vetor na tela
*/
#include<stdio.h>

#include<stdio.h>

int main() {
    int vetor[50];
    int i;

    for (i = 0; i < 50; i++) {
        vetor[i] = (i + 5 * i) % (i + 1);
    }

    printf("Vetor:\n");
    for (i = 0; i < 50; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
