/* 2. Uma locadora de vídeos tem guardada, em um vetor A de 500 posições, a quantidade de filmes retirados por seus clientes durante o ano de 2020. Agora, esta locadora está fazendo uma promoção e, para cada 15 filmes retirados, o cliente tem direito a uma locação grátis. Faça um procedimento que receba o vetor A por parâmetro e retorna um vetor contendo a quantidade de locações gratuitas a que cada cliente tem direito. 
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