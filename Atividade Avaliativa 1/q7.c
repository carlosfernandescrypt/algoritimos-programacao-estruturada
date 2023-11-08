/* 7.  Faça um algoritmo que leia as três notas de 30 alunos de uma turma. Para cada aluno, calcule a média ponderada, como segue: MP = ( n1*2 + n2*4 + n3*4 ) / 10
*/

#include <stdio.h>

int main() {
  float n1, n2, n3, mp;
  int i;
  
  for(i = 1; i <= 30; i++){
    printf("Digite a primeira nota do aluno %d: ", i);
    scanf("%f", &n1);
    printf("Digite a segunda nota do aluno %d: ", i);
    scanf("%f", &n2);
    printf("Digite a terceira nota do aluno %d: ", i);
    scanf("%f", &n3);
    mp = (n1*2 + n2*4 + n3*4)/10;
    printf("A média ponderada do aluno %d é %.2f\n", i, mp);
  }
}