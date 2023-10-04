#include<stdio.h>
#include<math.h>

int main() {
  int x[10], y[10];
   for(int i = 0; i < 10; i++){
      printf("Informe o %dº número: ", i+1);
      scanf("%d", &x[i]);
      y[i] = x[i] * x[i];
      
   }
     for(int i = 0; i < 10; i++){
      printf("\n%d", y[i]);
   }
  
}

