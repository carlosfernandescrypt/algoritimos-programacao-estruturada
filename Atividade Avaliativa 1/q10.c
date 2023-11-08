/* 10. Foi feita uma estatística nas 200 principais cidades brasileiras para coletar dados sobre acidentes de trânsito. Foram obtidos os seguintes dados:  

- código da cidade

- estado (RS, SC, PR, SP, RJ, ...)

- número de veículos de passeio (em 1992)

- número de acidentes de trânsito com vítimas (em 1992)

Deseja-se saber:

a) qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem

b) qual a média de veículos nas cidades brasileiras

c) qual a média de acidentes com vítimas entre as cidades do Rio Grande do Sul.


*/

#include <stdio.h>

int main() {
  int codigo, veiculos, acidentes;
  char estado[3];
  int maiorIndiceAcidentes = 0, menorIndiceAcidentes = 0;
  int codigoMaiorIndice, codigoMenorIndice;
  int totalVeiculos = 0, totalCidades = 0;
  int totalAcidentesRS = 0, totalCidadesRS = 0;
  
  for (int i = 0; i < 200; i++) {
    printf("Informe o codigo da cidade: ");
    scanf("%d", &codigo);
    
    printf("Informe o estado da cidade: ");
    scanf("%s", estado);
    
    printf("Informe o numero de veiculos de passeio: ");
    scanf("%d", &veiculos);
    
    printf("Informe o numero de acidentes de transito com vitimas: ");
    scanf("%d", &acidentes);
    
    if (i == 0) {
      maiorIndiceAcidentes = acidentes;
      menorIndiceAcidentes = acidentes;
      codigoMaiorIndice = codigo;
      codigoMenorIndice = codigo;
    } else {
      if (acidentes > maiorIndiceAcidentes) {
        maiorIndiceAcidentes = acidentes;
        codigoMaiorIndice = codigo;
      }
      
      if (acidentes < menorIndiceAcidentes) {
        menorIndiceAcidentes = acidentes;
        codigoMenorIndice = codigo;
      }
    }
    
    totalVeiculos += veiculos;
    totalCidades++;
    
    if (estado[0] == 'R' && estado[1] == 'S') {
      totalAcidentesRS += acidentes;
      totalCidadesRS++;
    }
  }
  
  float mediaVeiculos = (float) totalVeiculos / totalCidades;
  float mediaAcidentesRS = (float) totalAcidentesRS / totalCidadesRS;
  
  printf("Maior indice de acidentes de transito pertence a cidade de codigo %d\n", codigoMaiorIndice);
  printf("Menor indice de acidentes de transito pertence a cidade de codigo %d\n", codigoMenorIndice);
  printf("Media de veiculos nas cidades brasileiras: %.2f\n", mediaVeiculos);
  printf("Media de acidentes com vitimas nas cidades do Rio Grande do Sul: %.2f\n", mediaAcidentesRS);
  
  return 0;
}