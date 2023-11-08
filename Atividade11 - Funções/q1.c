/* 1. Escreva uma função que receba por parâmetro dois números e retorne o maior deles.



*/

#include <stdio.h>

int max(int num1, int num2) {
    return num1 > num2 ? num1 : num2;
}

int main() {
    int num1, num2;
    printf("Informe o primeiro número: ");
    scanf("%d", &num1);
    printf("Informe o segundo número: ");
    scanf("%d", &num2);
    printf("O maior número é: %d\n", max(num1, num2));
    return 0;
}