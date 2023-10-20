#include <stdio.h>

int main() {
    int moradores = 5;
    char elevador, periodo;
    int contadoresElevadores[3] = {0};

    for (int i = 0; i < moradores; i++) {
        printf("Morador %d:\n", i + 1);
        printf("Elevador mais frequente (A/B/C): ");
        scanf(" %c", &elevador);
        printf("Período mais frequente (M/V/N): ");
        scanf(" %c", &periodo);

        if (elevador == 'A') contadoresElevadores[0]++;
        else if (elevador == 'B') contadoresElevadores[1]++;
        else if (elevador == 'C') contadoresElevadores[2]++;
    }

    int maxPeriodo = 0, minPeriodo = moradores;
    char elevadorMaisFrequentado = ' ', periodoMaisUsado = ' ';
    char elevadorMediaUtilizacao = ' ';
    for (int i = 0; i < 3; i++) {
        if (contadoresElevadores[i] > maxPeriodo) {
            maxPeriodo = contadoresElevadores[i];
            elevadorMaisFrequentado = i == 0 ? 'A' : (i == 1 ? 'B' : 'C');
        }
        if (contadoresElevadores[i] < minPeriodo) {
            minPeriodo = contadoresElevadores[i];
            elevadorMediaUtilizacao = i == 0 ? 'A' : (i == 1 ? 'B' : 'C');
        }
    }

    printf("Período mais usado de todos: %c (Elevador %c)\n", periodoMaisUsado, elevadorMaisFrequentado);
    printf("Elevador mais frequentado: %c\n", elevadorMaisFrequentado);
    float diferencaPercentual = ((float)(maxPeriodo - minPeriodo) / moradores) * 100;
    printf("Diferença percentual entre o mais usado e o menos usado: %.2f%%\n", diferencaPercentual);
    float percentagemMediaUtilizacao = ((float)minPeriodo / moradores) * 100;
    printf("Percentagem sobre o total de serviços prestados do elevador de média utilização: %.2f%%\n", percentagemMediaUtilizacao);

    return 0;
}
