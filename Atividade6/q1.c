/* 3. Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a qual cidade pertence, considerando só os seguintes valores:  */

#include<stdio.h>
#include<math.h>
int main(void) {

  int ddd;
  printf("Informe o DDD: ");
  scanf("%d", &ddd);

  switch (ddd) {
    case (61): 
      printf("Brasília"); 
      break;
    case (71): 
      printf("Salvador"); 
      break;
    case (11):
      printf("São Paulo"); 
      break;
    case (21): 
      printf("Rio de Janeiro"); 
      break;
    case (32): 
      printf("Juiz de Fora"); 
      break;
    case (19): 
      printf("Campinas"); 
      break;
    case(27): 
      printf("Vitória"); 
      break;
    case (31): 
      printf("Belo Horizonte"); 
      break;   
    default:
      printf("Cidade sem identificação");
  }
}
  

