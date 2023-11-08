/* 5. Escreva uma função para o cálculo do volume de uma esfera V = 4/3pi * r^3

em que π = 3.1414592 valor do raio r deve ser passado por parâmetro. 

*/

#include <stdio.h>

void volEsfera(float raio) {
    float pi = 3.1414592;
    float volume = (4 * pi * (raio * raio * raio)) / 3;
    printf("O volume da esfera é: %.2f\n", volume);
}

int main() {
  float raio;
  printf("\nDigite o raio: ");
  scanf("%f", &raio);
  volEsfera(raio);

}