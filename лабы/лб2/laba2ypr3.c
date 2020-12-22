#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Russian");
    int n;
    printf("Даны значения 1,2,3,4, какое время года вас интересует? 1-Зима,2-Весна,3-Лето,4-Осень.:");
    scanf("%d",&n);
      if(n==1) printf("Декабрь, Январь, Февраль");
       else if(n==2) printf( "Март, Апрель, Май");
         else if(n==3) printf ("Июнь, Июль, Август");
           else if(n==4) printf("Сентябрь, Октябрь, Ноябрь");
    

    return 0;
}