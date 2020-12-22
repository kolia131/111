#include <stdio.h>
#include <math.h>
void main() {
    int a[6][6],sum=0,otr=0,o;
    float sr;
    for (int i=0;i<6;i++){
        printf("Введите строку №%d\n",i+1);
        for (int j=0;j<6;j++){
            scanf("%d",&a[i][j]);
        }    
    }
    for (int k=0;k<6;k++){
        for (int i=0;i<5;i++){
            for (int j=0;j<5-i;j++){
                if (a[k][j]>a[k][j+1]){
                    o=a[k][j];
                    a[k][j]=a[k][j+1];
                    a[k][j+1]=o;
                }
            }   
        }
    }
    printf("сумма наименших элементов нечетных строк-- %d \nсумма наибольших элементов четных строк-- %d\n",a[0][0]+a[2][0]+a[4][0],a[1][5]+a[3][5]+a[5][5]);
}