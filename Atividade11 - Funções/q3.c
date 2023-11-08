/* 3. Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit e a 
retorne convertida em graus Celsius. A fórmula de conversão é: C = (F – 32.0) * (5.0/9.0), 
sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

*/

#include <stdio.h>

void temp(float tempFah) {
    int tempC = (tempFah - 32.0) * (5.0/9.0);
    printf(">> %.2f graus Fahrenheit equivale a %d graus Celsius.\n", tempFah, tempC);
}

int main() {
  int temperature;
  printf("\nDigite a temperatura em graus Fahrenheit: ");
  scanf("%d", &temperature);
  temp(temperature);
}