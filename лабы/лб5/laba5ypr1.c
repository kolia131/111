include <stdio.h>
void main() {
    int i, ii, j;
    unsigned short m = 10, n = 12;
    float a[m][n];
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Введите элемент [%d,%d] массива: ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
    
    unsigned short hasPoints = 0;
    int maxRow, maxRowIndex, maxColumnIndex,
        minRow, minRowIndex, minColumnIndex
    ;
    unsigned short isNotTrueMinPoint, isNotTrueMaxPoint;
    for (i = 0; i < m; i++) {
        maxRow = a[i][0];
        maxRowIndex = i;
        maxColumnIndex = 0;
        
        minRow = a[i][0];
        minRowIndex = i;
        minColumnIndex = 0;
        for (j = 1; j < n; j++) {
            if (a[i][j] > maxRow) {
                maxRow = a[i][j];
                maxRowIndex = i;
                maxColumnIndex = j;
            }
            if (a[i][j] < minRow) {
                minRow = a[i][j];
                minRowIndex = i;
                minColumnIndex = j;
            }
        }
        isNotTrueMinPoint = 0;
        isNotTrueMaxPoint = 0;
        for (ii = 0; ii < m; ii++) {
            if (!isNotTrueMaxPoint && a[ii][maxColumnIndex] < maxRow) {
                isNotTrueMaxPoint = 1;
            }
            if (!isNotTrueMinPoint && a[ii][minColumnIndex] > minRow) {
                isNotTrueMinPoint = 1;
            }
            if (isNotTrueMinPoint && isNotTrueMaxPoint) {
                break;
            }
        }
        if (!isNotTrueMaxPoint) {
            printf("[%d,%d]\n", maxRowIndex, maxColumnIndex);
            hasPoints = 1;
        }
        if (!isNotTrueMinPoint) {
            printf("[%d,%d]\n", minRowIndex, minColumnIndex);
            hasPoints = 1;
        }
    }
    if (!hasPoints) {
        printf("Седловых точек в указанном массиве нет");
    }
}