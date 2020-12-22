#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void getMatrixElements(int**, int, int);
void printMatrixElemnts(int**, int, int);
int numOfFirstRow(int **, int, int);
void increasMatrix(int **, int, int, int);

int main(void)
{
	int **matrix = NULL;
	int rows, collumn;

	printf("%s\n", "Введите число сторк матрицы: ");
	scanf("%d", &rows);

	printf("%s\n", "Введите число столбцов матрицы: ");
	scanf("%d", &collumn);

	getMatrixElements(matrix, rows, collumn);

	return 0;
}


void getMatrixElements(int **arr, int m, int n)
{
	arr = (int**)malloc(m * sizeof(int*));
	for (int i = 0; i < m; i++)
	{
		arr[i] = (int*)malloc(n * sizeof(int));
	}

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%s %d-%d\n", "Введите элемент матрицы ", i, j);
			scanf("%d", arr[i]+j);
		}
	}

	printf("\n%s\n", "Исходная матрица");
	printMatrixElemnts(arr, m, n);

	increasMatrix(arr, m, n, numOfFirstRow(arr, m, n));

	printf("\n%s\n", "Готовая матрица матрица");
	printMatrixElemnts(arr, m ,n);

}


void printMatrixElemnts(int **arr, int m, int n)
{
	for (int i = 0; i < m; ++i)
	{
		printf("\n");
		for (int j = 0; j < n; ++j)
		{
			printf("%d\t", *(arr[i]+j));
		}
		printf("\n");
	}
	printf("\n");
}

int numOfFirstRow (int **arr, int m, int n)
{
	for (int i = 0; i < m; ++i)
	{
		int k = 0;

		for (int j = 0; j < n; ++j)
		{
			if ( *(arr[i]+j) < 0)
		    {
		    	k++;
		    }
		}
        
        if (k == n)
        {
        	printf("строка [%d] состоит из отрицательных элементов\n", i+1);
        	return *(arr[i]+0);
        	break;
        }
        else
        {
            printf("строка [%d] не состоит из отрицательных элементов\n", i+1);
            return 0;
        }
	}
}

void increasMatrix(int **arr, int m, int n, int num)
{
	for (int i = 0; i < m; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			*(arr[i]+j) += num; 
		}
	}
}