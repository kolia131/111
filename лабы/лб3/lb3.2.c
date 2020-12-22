#include <stdio.h>

void main()
{
int T=0,a=0,b=0,c=0,d=0,R=100;
for(a;a<=2;a++){
for(b;b<=5;b++){
for(c;c<=20;c++){
for(d;d<=50;d++){
if(R=(a*50+b*20+c*5+d*2))
T++;
}
 }
  }
   }
printf("Sposobov nabora - %d", T);
}