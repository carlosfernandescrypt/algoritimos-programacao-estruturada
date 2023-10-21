/* 3. Dado três valores, A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, e se for, se é um triangulo escaleno, um triangulo equilátero ou um triangulo isósceles.        
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
  if (a == b && b == c) {
    printf("Triangulo equilatero");
  }
  if (a == b || a == c || c == a || c == b || b == a || b == c) {
    printf("Triangulo isosceles");
  }
  if (a != b && a != c && b != a && b != c && c != b && c != a) {
    printf("Triangulo escaleno");
  }
}