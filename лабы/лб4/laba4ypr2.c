#include <stdio.h>
#include <stdlib.h>
#define N 10

int main() {
    int a[N];
    int i;
    float sum, avrg;
    srand(time(NULL));
    sum = 0;
    for (i=0; i<N; i++) {
        a[i] = rand() % 10;
        printf("%3d", a[i]);
        sum += a[i];
    }
    printf("\n");
   
    avrg = sum/N;
    printf("%.2f\n",avrg);
    for (i=0; i<N; i++)
        if (a[i] < avrg) printf("%3d", a[i]);
    printf("\n");
}
