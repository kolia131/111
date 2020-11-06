
#include <stdio.h>
#include <stdlib.h>
#define N 10
int main() {
    int arr[N], i, min, max, b;
    srand(time(NULL));
    min = 0;
    max = 0;
    for (i=0; i<N; i++) {
        arr[i] = rand() % 10;
        printf("%d ", arr[i]);
        if (arr[i] < arr[min]) min = i;
        if (arr[i] > arr[max]) max = i;
    }
    printf("\n");
    printf("arr[%d]=%d arr[%d]=%d\n",min+1,arr[min],max+1,arr[max]);
    b = arr[min];
    arr[min] = arr[max];
    arr[max] = b;
    for (i=0; i<N; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

