#include <stdio.h>
#include <malloc.h>

int getArrLenght();
void getArrElements(int*);
int compozitionOfHonestNumber(int *, int );
int sumOfNumber(int *, int );


int main(void)
{
	int *num = NULL;
	getArrElements(num);
	return 0;
}


int getArrLenght()
{
	int lenght;
	printf("%s\n", "Введите число элементов массива: ");
	scanf("%d", &lenght);
	return lenght;
}


void getArrElements(int *arr)
{
	int n = getArrLenght();
	arr = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; ++i)
	{
		printf("Введите %d элемент массива\n", i+1);
		scanf("%d", (arr + i));
	}

	printf ("Произведение чисел на чётных местах = %d\n", compozitionOfHonestNumber(arr, n));
	printf("сумма чисел между крайними нулями массива = %d\n", sumOfNumber(arr, n));
}

int compozitionOfHonestNumber(int *arr, int lenght)
{
	int compozition = 1;
	for (int i = 1; (2*i-1) < lenght; i++)
	{
		compozition = compozition * *(arr + (2*i-1)); 
		//printf("%d\n", compozition );
	}
	return compozition;
}

int sumOfNumber(int *arr, int lenght)
{
	int f_zero = 0, l_zero = 0, sum = 0;

    for (int i = 0; i < lenght; i++)
    {
    	if (*(arr + i) == 0)
	 	{
	 		f_zero = i;
	 	//	printf("%d\n", i);
	 		break;
        }
    }

    for (int i = lenght-1; i >= 0; i--)
    {
    	if (*(arr + i) == 0)
	 	{
	 	//	printf("%d\n", i);
	 		l_zero = i;
	 		break;
        }
    }

	for (int i = f_zero; i < l_zero; ++i)
	{
		sum += *(arr + i);
	}
	return sum;
}