/* 5. Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula: distancia = raiz((x2 - x1)^2 + (y2 + y1)^2
*/

#include <math.h>
#include <stdio.h>

int main() {
  float x1, y1, x2, y2, distancia;
  printf("Informe os 4 valores: ");
  scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
  distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  printf("%.4f\n", distancia);

}

