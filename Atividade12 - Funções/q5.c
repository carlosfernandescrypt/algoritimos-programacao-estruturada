/* 
5. Faça uma função que recebe a data de nascimento de uma pessoa em apresente sua idade expressa em dias, meses e anos.
*/


#include <stdio.h>
#include <time.h>

struct Data{
    int dia, mes, ano;
};

void calcularIdade(struct Data nascimento){
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    int anos = tm.tm_year + 1900 - nascimento.ano;
    int meses = tm.tm_mon + 1 - nascimento.mes;
    int dias = tm.tm_mday - nascimento.dia;

    if (meses < 0){
        anos--;
        meses += 12;
    }
    if (dias < 0){
        meses--;
        dias += 30;
    }

    printf("Idade: %d anos, %d meses, %d dias\n", anos, meses, dias);
}