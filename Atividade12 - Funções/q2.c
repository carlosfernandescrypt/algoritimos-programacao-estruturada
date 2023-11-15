/* 
2. Uma locadora de vídeos tem guardada, em um vetor A de 500 posições, a quantidade de filmes retirados por seus clientes durante o ano de 2020. Agora, esta locadora está fazendo uma promoção e, para cada 15 filmes retirados, o cliente tem direito a uma locação grátis. Faça um procedimento que receba o vetor A por parâmetro e retorna um vetor contendo a quantidade de locações gratuitas a que cada cliente tem direito. 
*/


#include <stdio.h>

void locacoes_gratuitas(int A[], int locacoes[], int n) {
    for (int i = 0; i < n; i++) {
        locacoes[i] = A[i] / 15;
    }
}

int main() {
  int A[500] = {15, 30, 45, 60, 75, 90, 105, 120, 135,
  150, 165, 180, 195, 210, 225, 240, 255, 270, 285, 300, 315,
  330, 345, 360, 375, 390, 405, 420, 435, 450
  };
  int locacoes[500];
  int n = sizeof(A) / sizeof(A[0]);
  locacoes_gratuitas(A, locacoes, n);
  printf("Locações gratuitas para cada cliente:\n");
  for (int i = 0; i < n; i++) {
    printf("Cliente %d: %d locações gratuitas\n", i+1, locacoes[i]);
  }
  return 0;
}
