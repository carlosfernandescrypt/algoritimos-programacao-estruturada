/* Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico. 
Chico - f(x) = 1,50 + 0,02 * x 
Zé - f(x) = 1,10 + 0,03 * x            
*/

#include <math.h>
#include <stdio.h>

int main() {
  int chico, ze;
  for (int i = 0; i < 1000; i++) {
    chico = 1.50 + 0.02 * i;
    ze = 1.10 + 0.03 * i;
    if(ze > chico) {
      printf("Zé terá %d anos para ser maior que Chico.\n", i);
      break;
    }
  }
}