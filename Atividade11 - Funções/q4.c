/* 4. Escreva uma função que receba por parâmetro a altura e o raio de um cilindro circular e 
retorne o volume desse cilindro. O volume de um cilindro circular é calculado por meio da 
seguinte fórmula:

V = π * raio² * altura

em que π = 3.1414592

*/

#include <stdio.h>

void volCilindro(float raio, float altura) {
    float pi = 3.1414592;
    float volume = pi * (raio * raio) * altura;
    printf("O volume do cilindro é: %.2f\n", volume);
}

int main() {
  float raio, altura;
  printf("\nDigite o raio: ");
  scanf("%f", &raio);
  printf("\nDigite a altura: ");
  scanf("%f", &altura);
  volCilindro(raio, altura);

}