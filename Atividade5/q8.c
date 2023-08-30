/* 8. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se  aposentar. As condições para aposentadoria são: • Ter pelo menos 65 anos; • Ou ter trabalhado pelo menos 30 anos;, • Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.   */

#include <stdio.h>

int main() {
    int idade, tempo;
    printf("Informe sua idade:\n");
    scanf("%f", &idade);
    printf("Informe seu tempo de serviço em anos:\n");
    scanf("%f", &tempo);

    if (idade >= 65 || tempo >= 30 || (idade >= 60 && tempo >= 25)) {
      printf("Você pode aposentar");
    }
    else {
      printf("você não pode aposentar");
    }
}
