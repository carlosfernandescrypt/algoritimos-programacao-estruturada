/* 8. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:  

a) média do salário da população;

b) média do número de filhos;

c) maior salário;

d) percentual de pessoas com salário até R$100,00.

O final da leitura de dados se dará com a entrada de um salário negativo. (Use o comando do - while) .


*/

#include <stdio.h>

int main() {
  float salario, somaSalarios = 0, mediaSalarios, totalSalarios = 0;
  int numFilhos, somaFilhos = 0, mediaFilhos, maiorSalario = 0, countSalarios100 = 0;
  float percentualSalarios100;
  
  int countHabitantes = 0;
  
  do {
    printf("Informe o salario: R$");
    scanf("%f", &salario);
    
    if (salario >= 0) {
      printf("Informe o numero de filhos: ");
      scanf("%d", &numFilhos);
      
      somaSalarios += salario;
      somaFilhos += numFilhos;
      countHabitantes++;
      
      if (salario > maiorSalario) {
        maiorSalario = salario;
      }
      
      if (salario <= 100) {
        countSalarios100++;
      }
    }
    
  } while (salario >= 0);
  
  mediaSalarios = somaSalarios / countHabitantes;
  mediaFilhos = somaFilhos / countHabitantes;
  percentualSalarios100 = (float) countSalarios100 / countHabitantes * 100;
  
  printf("Media do salario da populacao: R$%.2f\n", mediaSalarios);
  printf("Media do numero de filhos: %.2f\n", mediaFilhos);
  printf("Maior salario: R$%d\n", maiorSalario);
  printf("Percentual de pessoas com salario ate R$100.00: %.2f%%\n", percentualSalarios100);
  
  return 0;
}