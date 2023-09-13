/* 9. Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salario atual e o tempo de serviço de cada funcionário. Os funcionários com menor salario terão um aumento proporcionalmente maior do que os funcionários  com um salario maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus adicional de salário.  */

#include <stdio.h>

int main() {
    float salario, tempo, reajuste;
    printf("Digite seu salario atual:\n");
    scanf("%f", &salario);
    printf("Informe seu tempo de serviço em anos na empresa:\n");
    scanf("%f", &tempo);

    if (salario <= 500 && tempo < 1) {
      salario = salario * 0.25 + salario;
    }
    else if (salario <= 1000 && (tempo >= 1 && tempo <= 3)) {
      salario = salario * 0.20 + salario + 100;
    }
    else if (salario <= 1500 && (tempo >= 4 && tempo <= 6)) {
    salario = salario * 0.15 + salario + 200;
    }
    else if (salario <= 2000 && (tempo >= 7 && tempo <= 10)) {
    salario = salario * 0.10 + salario + 300;
    }
    else if (salario > 2000 && tempo > 10) {
      salario = salario + 500;
    }


}
