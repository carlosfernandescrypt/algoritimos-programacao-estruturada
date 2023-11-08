/* 9. Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:  

- 1,2,3,4 = voto para os respectivos candidatos;

- 5 = voto nulo;

- 6 = voto em branco;

Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva:

- total de votos para cada candidato;

- total de votos nulos;

- total de votos em branco;

Como finalizador do conjunto de votos, tem-se o valor 0.


*/

#include <stdio.h>

int main() {
  int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
  int voto, votosNulos = 0, votosBrancos = 0;
  
  printf("Informe o codigo do candidato (0 para finalizar): ");
  scanf("%d", &voto);
  
  while (voto != 0) {
    switch (voto) {
      case 1:
        candidato1++;
        break;
      case 2:
        candidato2++;
        break;
      case 3:
        candidato3++;
        break;
      case 4:
        candidato4++;
        break;
      case 5:
        votosNulos++;
        break;
      case 6:
        votosBrancos++;
        break;
    }
    
    printf("Informe o codigo do candidato (0 para finalizar): ");
    scanf("%d", &voto);
  }
  
  printf("Total de votos para o candidato 1: %d\n", candidato1);
  printf("Total de votos para o candidato 2: %d\n", candidato2);
  printf("Total de votos para o candidato 3: %d\n", candidato3);
  printf("Total de votos para o candidato 4: %d\n", candidato4);
  printf("Total de votos nulos: %d\n", votosNulos);
  printf("Total de votos em branco: %d\n", votosBrancos);
  
  return 0;
}