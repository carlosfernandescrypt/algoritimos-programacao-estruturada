/* 3. Calcule as raízes da equação de 2º grau. Lembrando que: */

#include<stdio.h>
#include<math.h>

int main() {
  int op;
  float preco = 0, quant = 0;

    printf("\n       []------[Menu]------[]");
    printf("\n100 - CACHORRO QUENTE - R$10,10 A UNIDADE");
    printf("\n101 - BAURU SIMPLES - R$8,30 A UNIDADE");
    printf("\n102 - BAURU C/ OVO - R$8,50 A UNIDADE");
    printf("\n103 - HAMBURGUER - R$12,50 A UNIDADE");
    printf("\n104 - CHEESEBURGUER - R$13,25 A UNIDADE");
    printf("\n105 - SAIR DO MENU\n");
    scanf("%d", &op);
    switch (op) {
      case 100:
        printf("Informe a quantidade: ");
        scanf("%f", &quant);
        preco = preco + (quant*10.10);
        printf("R$%f", preco);
        break;
      case 101:
        printf("Informe a quantidade: ");
        scanf("%f", &quant);
        preco = preco + (quant*8.30);
        printf("R$%f", preco);
        break; 
      case 102:
        printf("Informe a quantidade: ");
        scanf("%f", &quant);
        preco = preco + (quant*8.50);
        printf("R$%f", preco);
        break;
      case 103:
        printf("Informe a quantidade: ");
        scanf("%f", &quant);
        preco = preco + (quant*12.50);
        printf("R$%f", preco);
        break;
      case 104:
        printf("Informe a quantidade: ");
        scanf("%f", &quant);
        preco = preco + (quant*13.25);
        printf("R$%f", preco);
        break;
      case 4:
        break;
      }
  }
  

