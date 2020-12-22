#include <stdio.h>
#define LOW       -10
#define HIGH       10
#define ROWS        6
#define COLUMNS     6
 
int sum_of_max_in_even(int*matrix);
int sum_of_min_in_odd(int*matrix);
 
 
int main() {
    
    srand(time(NULL));
    int i, j;
    int Sum_in_even = 0, Sum_on_odd;
    int *matrix = malloc(ROWS*COLUMNS * sizeof(int));
    // fill the matrix with random numbers and print it to console
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLUMNS; j++) {
            matrix[i*COLUMNS + j] = rand() % (HIGH + 1 - LOW) + LOW;
            printf("%3d ", matrix[i*COLUMNS + j]);
        }
        printf("\n");
    }
 
    printf("\nThe sum of maximums of the even rows is: %d", sum_of_max_in_even(matrix));
    printf("\nThe sum of minimums of the odd rows is:  %d", sum_of_min_in_odd(matrix));
 
    printf("\n");
    system("pause");
    return 0;
}
 
int sum_of_max_in_even(int*matrix) {
    int sum = 0, i = 0, j = 0;
    int max_in_row = -2147483647;
    for (i = 0; i < ROWS; i += 2) {
        for (j = 0; j < COLUMNS; j++) {
            // check only even rows
            if (matrix[i*COLUMNS + j] > max_in_row) {
                max_in_row = matrix[i*COLUMNS + j];
            }
        }
        sum += max_in_row;
    }
    return sum;
}
 
int sum_of_min_in_odd(int*matrix) {
    int sum = 0, i = 0, j = 0;
    int min_in_row = 2147483647;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLUMNS; j++) {
            // check only odd rows
            if (i % 2 == 1) {
                if (matrix[i*COLUMNS + j] < min_in_row) {
                    min_in_row = matrix[i*COLUMNS + j];
                }
            }
        }
        if(i%2 == 1) sum += min_in_row;
    }
    return sum;