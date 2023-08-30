/* Construa um algoritmo que dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor. */

#include <stdio.h>
int main(void){
 int num, maior = 0, menor = 0;

 for (int i = 1; i <= 4; i++) {
  printf("\nDigite o %dº número: ", i);
  scanf("%i", &num);
  
  if (1 == i) { 
    maior = num;
    menor = num;
  }
  else if (num > maior) { 
    maior = num; 
  }
  else if (num < menor) {
    menor = num; 
  }
}
 
 printf("\nO maior número é: %i", maior);
 printf("\nO menor número é: %i", menor);
 return 0;
}