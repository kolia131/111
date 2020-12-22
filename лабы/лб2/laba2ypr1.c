#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int getAnswer(int x);

int main(void){
setlocale(LC_ALL,"Russian");
int n;
printf("введи 6-ти значное число:\n");
scanf("%d",&n);

if(getAnswer(n)) printf("yes");
else printf("no");

return 0;
}
int getAnswer(int x){
    int numbers[6];
    int sum1, sum2, i = 6;
    
    for(int k = 6; k > 0; k--){
        numbers[k-1] = x/pow(10, k-1);
        x -= pow(10, k-1) * numbers[k-1];

    }
     sum1 = numbers[0] + numbers [1] + numbers[2];
     sum2 = numbers[3] + numbers [4] + numbers [5];
     if(sum1 == sum2) return 1;
     else return 0;
}
