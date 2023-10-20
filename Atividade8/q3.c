#include <stdio.h>

int main() {
    int n;
    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O número deve ser não negativo.\n");
    } else {
        int a = 0, b = 1, resultado = 0;

        if (n == 0) {
            resultado = a;
        } else if (n == 1) {
            resultado = b;
        } else {
            for (int i = 2; i <= n; i++) {
                resultado = a + b;
                a = b;
                b = resultado;
            }
        }

        printf("O %dº termo da sequência de Fibonacci é: %d\n", n, resultado);
    }

    return 0;
}
