/* 
1.	Em uma fábrica de peças, o salário base dos operários é de R$ 600,00. Além do salário base, cada operário recebe um adicional de produtividade baseado na quantidade de peças fabricadas por mês. Este adicional é pago de acordo com o seguinte critério:
•	Se o número de peças for inferior ou igual a 50, não existe adicional de produtividade;
•	Se o número de peças for superior a 50 e inferior ou igual a 80, o adicional de produtividade será de R$ 0,50 para cada peça fabricada acima de 50;
•	Se o número de peças for superior a 80, o adicional de produtividade será de R$ 0,50 para cada peça fabricada acima de 50 até 80 e de R$ 0,75 por peça fabricada acima das 80.
Elabore um algoritmo para solicitar de cada funcionário a quantidade de peças fabricadas naquele mês e apresentar o seu salário. Isto deve se repetir para todos os funcionários da empresa, onde o usuário não sabe, inicialmente, quantos funcionários existem nesta empresa, ou seja, o número de funcionários não será fornecido. 
Sua solução proposta deverá possuir as lógicas bem definidas que sejam necessárias a implementação separada em sub-algoritmos específicos, devendo pelo menos os seguintes sub-algoritmos:
a)	validaQuantidade que validará o número de peças fabricadas por cada funcionário;
b)	calculaSalario que efetuará o cálculo do salário total para cada funcionário.
O resultado final será mostrado ao usuário por meio de um procedimento (mostraFinal).

*/

#include <stdio.h>

float validaQuantidade(int quantidade){
    if (quantidade <= 0){
        printf("Quantidade de pecas invalida\n");
        return -1;
    }
    return quantidade;
}

float calculaSalario(int quantidade){
    float salario;
    salario = 600.00;
    if (quantidade > 50 && quantidade <= 80){
        salario += (quantidade - 50) * 0.50;
    } else if (quantidade > 80){
        salario += 30 * 0.50 + (quantidade - 80) * 0.75;
    }
    return salario;
}

int main(){
    int quantidade;
    printf("Digite a quantidade de pecas fabricadas: ");
    scanf("%d", &quantidade);
    quantidade = validaQuantidade(quantidade);
    if (quantidade != -1){
        float salario = calculaSalario(quantidade);
        printf("Salario: R$ %.2f", salario);
    }
    return 0;
}