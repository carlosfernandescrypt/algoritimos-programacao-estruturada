/* 9. O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo
que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um
algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor */

#include<stdio.h>

int main(void) {

  float custoFabrica, porcentagemDistribuidor, porcentagemImpostos, carroNovoConsumidor;

  printf("Informe o custo de fabrica: ");
  scanf("%f", &custoFabrica);
  printf("Informe a porcentagem do distribuidor: ");
  scanf("%f", &porcentagemDistribuidor);
  printf("Informe a porcentagem de impostos aplicado ao custo de fábrica:  ");
  scanf("%f", &porcentagemImpostos);
  

  
  porcentagemImpostos *= 0.01;
  porcentagemDistribuidor *= 0.01;
  carroNovoConsumidor = custoFabrica + (custoFabrica * porcentagemDistribuidor) + (porcentagemImpostos * custoFabrica);
  
  printf("O custo do carro será de: %.2fR$", carroNovoConsumidor);


}

