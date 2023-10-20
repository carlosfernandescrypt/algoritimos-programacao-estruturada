#include <stdio.h>

int main() {
    char resposta;

    do {
        int mes, ano, diasNoMes;
        printf("Digite o mês (1 a 12): ");
        scanf("%d", &mes);
        printf("Digite o ano: ");
        scanf("%d", &ano);

        if (mes < 1 || mes > 12) {
            printf("Mês inválido.\n");
        } else {
            switch(mes) {
                case 2:
                    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
                        diasNoMes = 29;
                    } else {
                        diasNoMes = 28;
                    }
                    break;
                case 4: case 6: case 9: case 11:
                    diasNoMes = 30;
                    break;
                default:
                    diasNoMes = 31;
                    break;
            }

            printf("O mês %d do ano %d tem %d dias.\n", mes, ano, diasNoMes);
        }

        printf("VOCÊ DESEJA OUTRAS ENTRADAS (S/?)? ");
        scanf(" %c", &resposta);
    } while (resposta == 'S' || resposta == 's');

    printf("Programa encerrado.\n");

    return 0;
}
