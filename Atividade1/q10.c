/* 10. Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor. */

#include<stdio.h>

int main(void) {

  float salarioFinal, carrosVendidos, valorVendas, salario, comissaoFixa;

  printf("Informe o numero de carros vendidos: ");
  scanf("%f", &carrosVendidos);
  printf("Informe o valor total das vendas (R$): ");
  scanf("%f", &valorVendas);
  printf("Informe o seu salario (R$): ");
  scanf("%f", &salario);
  printf("Informe o valor da sua comissao fixa (R$):  ");
  scanf("%f", &comissaoFixa);

  salarioFinal = salario + (comissaoFixa * carrosVendidos) + (valorVendas * 0.05);

  
  printf("O seu sálario é: %.2fR$", salarioFinal);


}

