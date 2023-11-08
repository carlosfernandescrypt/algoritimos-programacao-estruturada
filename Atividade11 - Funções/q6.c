/* 6. Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa. Calcule 
e retorne o IMC (Índice de Massa Corporal) dessa pessoa 
imc = peso / (altura * altura)

*/

#include <stdio.h>

void imc(float peso, float altura) {
    float imc = peso / (altura * altura);
    printf(">> IMC: %.2f\n", imc);
}

int main() {
  float peso, altura;
  printf("\nDigite o peso: ");
  scanf("%f", &peso);
  printf("\nDigite a altura: ");
  scanf("%f", &altura);
  imc(peso, altura);

}