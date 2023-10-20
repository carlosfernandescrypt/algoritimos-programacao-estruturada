#include <stdio.h>

int main() {
    int quantidadeOtimo = 0;
    int quantidadeBom = 0;
    int quantidadeRegular = 0;
    int quantidadeRuim = 0;
    int quantidadePessimo = 0;
    int maiorIdadeOtimo = -1;
    int maiorIdadeRuim = -1;
    int idadeTotalRuim = 0;
    int maiorIdadePessimo = -1;
    int diferencaIdadesOtimoRuim = 0;

    for (int i = 0; i < 5; i++) {
        char nota;
        int idade;

        printf("Resposta %d:\n", i + 1);
        printf("Idade: ");
        scanf("%d", &idade);

        if (idade > maiorIdadeOtimo) {
            maiorIdadeOtimo = idade;
        }

        printf("Opinião (A/B/C/D/E): ");
        scanf(" %c", &nota);

        if (nota == 'A') {
            quantidadeOtimo++;
        } else if (nota == 'B') {
            quantidadeBom++;
        } else if (nota == 'C') {
            quantidadeRegular++;
        } else if (nota == 'D') {
            quantidadeRuim++;
            idadeTotalRuim += idade;
            if (idade > maiorIdadeRuim) {
                maiorIdadeRuim = idade;
            }
        } else if (nota == 'E') {
            quantidadePessimo++;
            if (idade > maiorIdadePessimo) {
                maiorIdadePessimo = idade;
            }
        }
    }

    if (quantidadeOtimo > 0 && quantidadeRuim > 0) {
        diferencaIdadesOtimoRuim = maiorIdadeOtimo - maiorIdadeRuim;
    }

    printf("\nQuantidade de respostas Ótimo: %d\n", quantidadeOtimo);
    if (quantidadeBom > 0 && quantidadeRegular > 0) {
        float diferencaPercentual = ((float)(quantidadeBom - quantidadeRegular) / quantidadeRegular) * 100;
        printf("Diferença percentual entre respostas Bom e Regular: %.2f%%\n", diferencaPercentual);
    }
    if (quantidadeRuim > 0) {
        float mediaIdadeRuim = (float)idadeTotalRuim / quantidadeRuim;
        printf("Média de idade das pessoas que responderam Ruim: %.2f\n", mediaIdadeRuim);
    }
    if (quantidadePessimo > 0) {
        float percentagemPessimo = ((float)quantidadePessimo / 100) * 100;
        printf("Percentagem de respostas Péssimo: %.2f%%\n", percentagemPessimo);
        printf("Maior idade que utilizou a opção Péssimo: %d\n", maiorIdadePessimo);
    }
    if (diferencaIdadesOtimoRuim != 0) {
        printf("Diferença de idade entre a maior idade que respondeu Ótimo e a maior idade que respondeu Ruim: %d\n", diferencaIdadesOtimoRuim);
    }

    return 0;
}
