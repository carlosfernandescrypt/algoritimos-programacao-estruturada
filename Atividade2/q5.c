/* 5. Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria. */

#include<stdio.h>

int main(void) {

  float mercadoria, frete, despesas, valorProdutoVendido, total, lucroMercadoria, porcentagem, valorLucro;

  printf("Informe o custo da mercadoria: ");
  scanf("%f", &mercadoria);
  printf("Informe o valor do frete: ");
  scanf("%f", &frete);
  printf("Informe outros valores eventuais: ");
  scanf("%f", &despesas);

  total = mercadoria + frete + despesas;

  printf("Qual o valor do produto vendido? ");
  scanf("%f", &valorProdutoVendido);

  lucroMercadoria = valorProdutoVendido / total;
  porcentagem = lucroMercadoria * 100;
  valorLucro = valorProdutoVendido - total;
  
  
  
  printf("\nA porcentagem de lucro foi de %.0f%%: ", porcentagem);
  printf("\nO lucro foi de %.2fR$: ", valorLucro);

}

/*
mercadoria = 50
frete = 20
despesas = 30
total = 100

qual o valor o produto foi vendido? = 150
lucromercadoria = valorprodutovendido / total (150 / 100) = 1.5 
porcentagem = 1.5 * 100 = 150%
valordelucro = valorprodutovendido - total
*/
