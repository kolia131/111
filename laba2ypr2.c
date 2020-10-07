#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h> 
 
int main(void){
    int a,b,c,n;
printf("Введи число a:\n");
scanf("%d",&a);
printf("Введи число b:\n");
scanf("%d",&b);
printf("Введи число c:\n");
scanf("%d",&c);
printf("Введи число n:\n");
scanf("%d",&n);

if(a % n == 0)
printf("n является делителем a\n");
if(b % n == 0)
printf("n является делителем b\n");
if(c % n == 0)
printf("n является делителем c\n");
if(a,b,c != 0)
printf("делителей нет!\n");
return 0;

}