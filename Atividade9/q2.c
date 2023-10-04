#include<stdio.h>
#include<math.h>

int main() {
  int A[6];
   for(int i = 0; i < 6; i++){
      printf("Informe o %dº número: ", i+1);
      scanf("%d", &A[i]);
   }
     for(int i = 0; i < 6; i++){
      printf("\n%d", A[i]);
   }
  
}

