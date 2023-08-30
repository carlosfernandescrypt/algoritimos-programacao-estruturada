/* 4. Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma descendente (do maior para o menor). */

#include <stdio.h>

int main() {
    int a, b, c, aux;
    printf("Digite o primeiro número:\n");
    scanf("%d", &a);
    printf("Digite o segundo número:\n");
    scanf("%d", &b);
    printf("Digite o terceiro número:\n");
    scanf("%d", &c);
    if (a < c) {
        aux = c;
        c = a;
        a = aux;
    }
    if (a < b) {
        aux = b;
        b = a;
        a = aux;
    }
    if (b < c) {
        aux = c; 
        c = b;
        b = aux;
    }
    printf("Números em ordem descendente: ");
    printf("%d %d %d", a, b, c);
}
