#include <stdio.h>
 
#define N 3
#define M 3
 
int matrix[N][M] = {
                     {2,4,9},
                     {1,3,7},
                     {4,5,6},
                     {2,1,9},
                     {5,1,3}
                   };
 
void asort(int *arr)
{
    int i, j;
    for(i = 0; i < M / 2; i++)
    {
        int tmp = arr[i];
        arr[i] = arr[M - i - 1];
        arr[M - i - 1] = tmp;
       // printf("%d ", arr[i]);
    }
}
 
 
int main()
{
    int i,j;
    int flag = 1;
    int resSt = 1;
    /**
    В этом цикле мы идем по строкам.
    **/
    for(i = 0; i < N; i++)
    {

        for(j = 0; j < M - 1; j++)
        {
            if(matrix[i][j] > matrix[i][j + 1])
                flag = 0;
        }
        if(flag)
            resSt = i;
    }

    for(i = 0; i < M; i++)
        printf("%d ", matrix[resSt][i]);
 
    asort(matrix[resSt]);
 
    printf("\n");
 
    for(i = 0; i < M; i++)
        printf("%d ", matrix[resSt][i]);
 
}