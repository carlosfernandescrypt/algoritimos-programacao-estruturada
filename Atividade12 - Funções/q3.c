/* 
3. Faça um procedimento que receba uma matriz A(10,10), por parâmetro, e realize as seguintes trocas:

    a linha 2 com a linha 8;
    a coluna 4 com a coluna 10;
    a diagonal principal com a secundária;
    a linha 5 com a coluna 10;

O procedimento deve retornar a matriz alterada.
*/


#include <stdio.h>

void trocarMatriz(int A[10][10]) {
    // troca linha 2 com linha 8
    for (int i = 0; i < 10; i++) {
        int temp = A[2][i];
        A[2][i] = A[8][i];
        A[8][i] = temp;
    }

    // troca coluna 4 com coluna 10
    for (int i = 0; i < 10; i++) {
        int temp = A[i][4];
        A[i][4] = A[i][9];
        A[i][9] = temp;
    }

    // troca diagonal principal com a secundária
    for (int i = 0; i < 10; i++) {
        int temp = A[i][i];
        A[i][i] = A[i][9 - i];
        A[i][9 - i] = temp;
    }

    // troca linha 5 com coluna 10
    for (int i = 0; i < 10; i++) {
        int temp = A[4][i];
        A[4][i] = A[i][9];
        A[i][9] = temp;
    }
}
int main() {
  int A[10][10] = {
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
  {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
  {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
  {31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
  {41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
  {51, 52, 53, 54, 55, 56, 57, 58, 59, 60},
  {61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
  {71, 72, 73, 74, 75, 76, 77, 78, 79, 80},
  {81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
  {91, 92, 93, 94, 95, 96, 97, 98, 99, 100}
};

  trocarMatriz(A);

  printf("Matriz alterada:\n");
  for (int i = 0; i < 10; i++) {
    printf("Linha %d: ", i+1);
    printf("%d %d %d %d %d %d %d %d %d %d\n", A
      [i][0], A[i][1], A[i][2], A[i][3], A[i][4], A
      [i][5], A[i][6], A[i][7], A[i][8], A[i][9]);
    }

  return 0;
}