/* 3. Calcule as raízes da equação de 2º grau. Lembrando que: */

#include<stdio.h>
#include<math.h>
int main(void) {

  int a, b, c, delta, xp, xn;

  printf("Informe o valor de a: ");
  scanf("%d", &a);
  printf("Informe o valor de b: ");
  scanf("%d", &b);
  printf("Informe o valor de c: ");
  scanf("%d", &c);

  delta = (b*b) - 4*a*c;
  while (1) {
      if (delta >= 0) {
        xp = (-b + sqrt(delta)) / 2*a;
        xn = (-b - sqrt(delta)) / 2*a;
        printf("\nRaiz x': %d", xn);
        printf("\nRaiz x'': %d", xp);
        break;
    }
      else if (delta == 0) {
        xp = (-b + sqrt(delta)) / 2*a;
        xn = (-b - sqrt(delta)) / 2*a;
        printf("\nRaiz única");
        printf("\nRaiz x': %d", xn);
        printf("\nRaiz x'': %d", xp);
        break;
    }
      else {
        printf("Não existe raiz");
        break;
      }
  }
}

