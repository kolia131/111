#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int get_randomkey()
{
    return rand()%21+(-10);
}
int get_randominfo()
{
    return rand()%255;
}
 int main()
 {
     srand(time(NULL));

     struct zap{
         int key[20];
         int info[20];
     }data;

   for(int i=0; i<20; i++)
   {
       struct zap;
       data.key[i] = get_randomkey();
       data.info[i] = get_randominfo();
       printf("%5d %5d\n", data.key[i],data.info[i]);
   }
   printf("newmassiv\n");
    for(int i = 0; i < 20; i++)
   {
    if(data.key[i] >= 0)
       {
         printf("%d",data.key[i]);
          data.key[i] = data.info[i];
         printf("%5d\n", data.key[i]);
       }
   }
 }