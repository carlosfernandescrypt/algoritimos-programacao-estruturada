/* 1. Fazer um programa que solicita o total gasto pelo cliente de uma loja, imprime as opções de pagamento, solicita a opção desejada e imprime o valor total das prestações (se houverem).

a) Opção: a vista com 10% de desconto

b) Opção: em duas vezes (preço da etiqueta)

c) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00).

OBS: fazer uma função que imprime as opções, solicita a opção desejada e retorna a opção escolhida. No programa principal, testar a opção escolhida e ativar a função correspondente (uma função para cada opção). 
*/

#include <stdio.h>

float calcDesconto(float total) {
    return total * 0.90;
}

float calcDuasVezes(float total) {
    return total / 2.0;
}

float calcParcelasComJuros(float total, int numJuros) {
    float juros = 0.03;
    float totalJuros = total * (1 + juros * numJuros);
    return totalJuros / numJuros;
}

int opt() {
    int choice;
    printf("Opções de pagamento:\n");
    printf("1) A vista com 10%% de desconto\n");
    printf("2) Em duas vezes (preço da etiqueta)\n");
    printf("3) De 3 até 10 vezes com 3%% de juros ao mês (somente para compras acima de R$ 100,00)\n");
    printf("Escolha a opção desejada (1, 2 ou 3): ");
    scanf("%d", &choice);
    return choice;
}

int main() {
    float total, juros;
    int esc;
    
    printf("Informe o total gasto pelo cliente: ");
    scanf("%f", &total);
    
    esc = opt();
    
    switch (esc) {
        case 1:
            juros = calcDesconto(total);
            printf("Valor total das prestações: R$%.2f\n", juros);
            break;
        case 2:
            juros = calcDuasVezes(total);
            printf("Valor total das prestações: R$%.2f\n", juros);
            break;
        case 3:
            if (total > 100.00) {
                int numJuros;
                printf("Informe o número de parcelas (de 3 até 10): ");
                scanf("%d", &numJuros);
                if (numJuros >= 3 && numJuros <= 10) {
                    juros = calcParcelasComJuros(total, numJuros);
                    printf("Valor total das prestações: R$%.2f\n", juros);
                } else {
                    printf("Número inválido de parcelas.\n");
                }
            } else {
                printf("Valor da compra não atende aos critérios para parcelamento com juros.\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
    }
}