#include <math.h>
#include <stdio.h>

int main(void){
    int n,s;
    float sum;

    printf("Введи год к которому ты хочешь посчитать исходную сумму:");
scanf("%d",&n);
  s = n - 1626;
  sum = 20;
  for(int i=s; i>0; i--){
      sum += sum*0.04;
  }
  printf("%f\n",sum);

  return 0;
}