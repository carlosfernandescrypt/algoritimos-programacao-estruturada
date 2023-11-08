/* 2. Faça uma função que receba um número inteiro entre 1 a 12 e imprima em tela o mês e a sua quantidade de dias de acordo com o número digitado pelo usuário. Exemplo: 
Entrada = 4. 
Saída = abril

*/

#include <stdio.h>

void printMes(int month) {
    switch (month) {
        case 1:
            printf("Janeiro - 31 dias");
            break;
        case 2:
            printf("Fevereiro - 28 ou 29 dias");
            break;
        case 3:
            printf("Março - 31 dias");
            break;
        case 4:
            printf("Abril - 30 dias");
            break;
        case 5:
            printf("Maio - 31 dias");
            break;
        case 6:
            printf("Junho - 30 dias");
            break;
        case 7:
            printf("Julho - 31 dias");
            break;
        case 8:
            printf("Agosto - 31 dias");
            break;
        case 9:
            printf("Setembro - 30 dias");
            break;
        case 10:
            printf("Outubro - 31 dias");
            break;
        case 11:
            printf("Novembro - 30 dias");
            break;
        case 12:
            printf("Dezembro - 31 dias");
            break;
        default:
            printf("Mês inválido");
            break;
    }
}

int main() {
    int month;
    for (int i = 1; i <= 12; i++) {
      printf("\nDigite um número de 1 a 12: ");
      scanf("%d", &month);
      printMes(month);
    }
}