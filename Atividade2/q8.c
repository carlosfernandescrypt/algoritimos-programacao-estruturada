/* 8. Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário. */

#include<stdio.h>

int main(void) {

  float salarioMensal, reajuste, salarioReajuste;

  printf("Informe seu salario mensal: ");
  scanf("%f", &salarioMensal);
  printf("Informe o reajuste em %%: ");
  scanf("%f", &reajuste);
  
  reajuste = reajuste * 0.01;
  salarioReajuste = salarioMensal * reajuste;
  salarioMensal += salarioReajuste;
  
  printf("Seu novo sálario com o reajuste é: %.2f", salarioMensal);


}

