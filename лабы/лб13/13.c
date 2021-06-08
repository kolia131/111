
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int get_random()
{
   return rand()%20;
}
 int main(void)
 {
srand(time(NULL));
int massiv1[20];
int massiv2[20];
 
  for(int i=0; i<20; i++)
  {
     massiv1[i] = get_random();
     massiv2[i] = get_random();
     printf("%5i %5i\n",massiv1[i],massiv2[i]);
  }
 
  int temp;
   int temp1;
  
  for (int i = 20 - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (massiv1[j] > massiv1[j + 1])
            {
                temp = massiv1[j];
                massiv1[j] = massiv1[j + 1];
                massiv1[j + 1] = temp;
    
            }
             if (massiv2[j] > massiv2[j + 1])
            {
                temp1 = massiv2[j];
                massiv2[j] = massiv2[j + 1];
                massiv2[j + 1] = temp1;
    
            }
        }
    
    }

    printf("Sorted array:\n");
    for (int i = 0; i < 20; i++)
        printf("%5d %5d \n", massiv1[i],massiv2[i]);
  
    int massiv3[40];
    int k=0;
    
    for(int i=0; i<20; i++)
    massiv3[k++] = massiv1[i];
       for(int i=0; i<20; i++)
         massiv3[k++] = massiv2[i];
          printf("full massiv\n");
          for(int i = 0; i < 40; i++)
           printf("%8d\n",massiv3[i]);
    
   int temp2;

   for(int i = 40-1; i>=0; i--)
   {
       for(int j = 0; j < i; j++)
       {
           if(massiv3[j] > massiv3[j + 1])
           {
               temp2 = massiv3[j];
               massiv3[j] = massiv3[j + 1];
               massiv3[j + 1] = temp2;
           }
       }
   }
    
 printf("sorted massiv\n");
 for(int i = 0; i < 40; i++)
  printf("%8d\n", massiv3[i]);
return 0;
}