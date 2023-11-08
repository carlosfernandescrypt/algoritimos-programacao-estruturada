/* 7.  Faça um algoritmo que leia as três notas de 30 alunos de uma turma. Para cada aluno, calcule a média ponderada, como segue: MP = ( n1*2 + n2*4 + n3*4 ) / 10

Além disso, calcule a média geral da turma. Mostre a média de cada aluno e uma mensagem "Aprovado", caso a média seja maior ou igual a sete, e uma mensagem "Reprovado", caso contrário. Ao final, mostre a média geral.
*/

#include <stdio.h>

int main() {
  int n1, n2, n3, media, media_geral, media_aluno;
  int i;
  
  for(i = 0; i < 30; i++){
    printf("Digite a primeira nota: ");
    scanf("%d", &n1);
    printf("Digite a segunda nota: ");
    scanf("%d", &n2);
    printf("Digite a terceira nota: ");
    scanf("%d", &n3);
    media = (n1*2 + n2*4 + n3*4)/10;
    printf("A média do aluno é: %d\n", media);
    if(media >= 7){
      printf("Aprovado\n");  
    }
    else{
      printf("Reprovado\n");
    }
    media_aluno = media + media_aluno;
    media_geral = media_aluno/30;
  }
  printf("A média geral da turma é: %d\n", media_geral);
}
