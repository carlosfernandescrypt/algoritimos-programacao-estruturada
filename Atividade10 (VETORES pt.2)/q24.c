/* 24. faça um programa que leia dez conjuntos de dois valores, o primeiro representando o numero do aluno e o segundo representando a sua altura em metros. encontre o aluno mais baixo e o mais alto. mostre o número do aluno mais baixo e do mais alto, juntamente com suas alturas */

#include <stdio.h>

int main() {
    int aluno, aluno_mais_baixo, aluno_mais_alto;
    float altura, altura_mais_baixa, altura_mais_alta;

    printf("Digite o numero do aluno e sua altura (em metros):\n");
  
    scanf("%d %f", &aluno, &altura);
    aluno_mais_baixo = aluno_mais_alto = aluno;
    altura_mais_baixa = altura_mais_alta = altura;

    for (int i = 1; i < 10; i++) {
        scanf("%d %f", &aluno, &altura);
        if (altura < altura_mais_baixa) {
            aluno_mais_baixo = aluno;
            altura_mais_baixa = altura;
        }
        if (altura > altura_mais_alta) {
            aluno_mais_alto = aluno;
            altura_mais_alta = altura;
        }
    }

    printf("Aluno mais baixo: %d\nAltura: %.2f\n", aluno_mais_baixo, altura_mais_baixa);
    printf("Aluno mais alto: %d\nAltura: %.2f\n", aluno_mais_alto, altura_mais_alta);

    return 0;
}