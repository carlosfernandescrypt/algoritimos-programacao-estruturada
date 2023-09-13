/* 6. Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim, apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade de frutas. Ao final, apresente o valor total da compra.
1 => ABACAXI – 5,00 a unidade 2 => MAÇA – 1,00 a unidade 3 => PERA – 4,00 a unidade */

#include <stdio.h>

int main() {
  int op, quant = 0, precoTotal = 0;

  while (op != 4) {
      printf("\n       []------[Menu]------[]");
      printf("\n1 - ABACAXI - R$5,00 A UNIDADE");
      printf("\n2 - MAÇA - R$1,00 A UNIDADE");
      printf("\n3 - PERA - R$4,00 A UNIDADE");
      printf("\n4 - SAIR DO MENU\n");
      scanf("%d", &op);
    switch (op) {
      case 1:
        printf("Informe a quantidade: ");
        scanf("%d", &quant);
        precoTotal = precoTotal + (quant*5);
        break;
      case 2:
        printf("Informe a quantidade: ");
        scanf("%d", &quant);
        precoTotal = precoTotal + (quant*1);
        break; 
      case 3:
        printf("Informe a quantidade: ");
        scanf("%d", &quant);
        precoTotal = precoTotal + (quant*4);
        break;
      case 4:
        break;
      }
  }
  printf("R$%d", precoTotal);
}
