/* 4. Dados três valores A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, e se for classificá-los (imprimi-los) segundo os ângulos. (Triângulo Retângulo = 90º, Triângulo Obtusângulo > 90º, Triângulo Acutângulo < 90º)  
*/

#include <math.h>
#include <stdio.h>

int main() {
  int a, b, c;
  printf("Digite o valor de A: ");
  scanf("%d", &a);
  printf("Digite o valor de B: ");
  scanf("%d", &b);
  printf("Digite o valor de C: ");
  scanf("%d", &c);
  if (a > b + c || b > a + c || c > a + b) {
    printf("Não é um triângulo.");
  } 
  else if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow
      (b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2)
       == pow(a, 2) + pow(b, 2)) {
      printf("Triângulo Retângulo.");
    } 
  else if (pow(a, 2) > pow(b, 2) + pow(c, 2) ||
        pow(b, 2) > pow(a, 2) + pow(c, 2) ||
        pow(c, 2) > pow(a, 2) + pow(b, 2)) {
        printf("Triângulo Obtusângulo.");
  } 
  else if (pow(a, 2) < pow(b, 2) + pow(c, 2) ||
        pow(b, 2) < pow(a, 2) + pow(c, 2) ||
        pow(c, 2) < pow(a, 2) + pow(b, 2)) {
        printf("Triângulo Acutângulo.");
    }
}

