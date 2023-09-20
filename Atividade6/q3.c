/* 3. Calcule as raízes da equação de 2º grau. Lembrando que: */
// Prato: 1 - vegetariano, 2 – Peixe, 3 – Frango, 4 – Carne;

// Sobremesa: 1 – Abacaxi, 2 – Sorvete diet, 3 – Mouse diet, 4 – Mouse chocolate;

// Bebida: 1 – Chá, 2 - Suco de laranja, 3 – Suco de melão, 4 – Refrigerante diet. 

#include<stdio.h>
#include<math.h>

int main() {
  int opPratos, opSobremesa, opBebida;
  int totalCal = 0;

    printf("\n       []------[PRATOS]------[]");
    printf("\n1 - VEGETARIANO");
    printf("\n2 - PEIXE");
    printf("\n3 - FRANGO");
    printf("\n4 - CARNE");
    printf("\n5 - SAIR DO MENU\n");
    scanf("%d", &opPratos);
    printf("\n       []------[SOBREMESAS]------[]");
    printf("\n1 - ABACAXI");
    printf("\n2 - SORVETE DIET");
    printf("\n3 - MOUSSE DIET");
    printf("\n4 - MOUSSE CHOCOLATE");
    printf("\n5 - SAIR DO MENU\n");
    scanf("%d", &opSobremesa);
    printf("\n       []------[BEBIDAS]------[]");
    printf("\n1 - CHÁ");
    printf("\n2 - SUCO DE LARANJA");
    printf("\n3 - SUCO DE MELÃO");
    printf("\n4 - REFRIGERANTE DIET");
    printf("\n5 - SAIR DO MENU\n");
    scanf("%d", &opBebida);
    switch (opPratos) {
      case 1:
        totalCal = totalCal + 180;
        break;
      case 2:
        totalCal = totalCal + 230; 
        break; 
      case 3:
        totalCal = totalCal + 250;
        break;
      case 4:
        totalCal = totalCal + 350;
        break;
      case 5:
        break;
      }
    switch (opSobremesa) {
      case 1:
        totalCal = totalCal + 75;
        break;
      case 2:
        totalCal = totalCal + 110; 
        break; 
      case 3:
        totalCal = totalCal + 170;
        break;
      case 4:
        totalCal = totalCal + 200;
        break;
      case 5:
        break;
      }
    switch (opBebida) {
      case 1:
        totalCal = totalCal + 20;
        break;
      case 2:
        totalCal = totalCal + 70; 
        break; 
      case 3:
        totalCal = totalCal + 100;
        break;
      case 4:
        totalCal = totalCal + 65;
        break;
      case 5:
        break;
      }
  printf("Total de calorias: %d", totalCal);
  }
  

