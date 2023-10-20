#include <stdio.h>

int main() {
    int numHomens = 0, numMulheres = 0;
    float alturaTotalHomens = 0, pesoTotalHomens = 0;
    float alturaTotalMulheres = 0, pesoTotalMulheres = 0;

    for (int i = 0; i < 10; i++) {
        char sexo;
        float altura, peso;

        printf("Pessoa %d:\n", i + 1);
        printf("Sexo (M/m para masculino, F/f para feminino): ");
        scanf(" %c", &sexo);
        printf("Altura (em metros): ");
        scanf("%f", &altura);
        printf("Peso (em kg): ");
        scanf("%f", &peso);

        if (sexo == 'M' || sexo == 'm') {
            numHomens++;
            alturaTotalHomens += altura;
            pesoTotalHomens += peso;
        } else if (sexo == 'F' || sexo == 'f') {
            numMulheres++;
            alturaTotalMulheres += altura;
            pesoTotalMulheres += peso;
        }
    }

    printf("Número de homens: %d\nNúmero de mulheres: %d\n", numHomens, numMulheres);
    printf("Altura média dos homens: %.2f metros\n", numHomens > 0 ? alturaTotalHomens / numHomens : 0);
    printf("Altura média das mulheres: %.2f metros\n", numMulheres > 0 ? alturaTotalMulheres / numMulheres : 0);
    printf("Altura média do grupo: %.2f metros\n", (alturaTotalHomens + alturaTotalMulheres) / 10);
    printf("Peso médio dos homens: %.2f kg\n", numHomens > 0 ? pesoTotalHomens / numHomens : 0);
    printf("Peso médio das mulheres: %.2f kg\n", numMulheres > 0 ? pesoTotalMulheres / numMulheres : 0);
    printf("Peso médio do grupo: %.2f kg\n", (pesoTotalHomens + pesoTotalMulheres) / 10);

    return 0;
}
