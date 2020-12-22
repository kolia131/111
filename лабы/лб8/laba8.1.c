#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct employee 
{
    char surname[20];
    char name[20];
    char patronymic[20];
    char position[20];
    int birthyear;
    int salary;
};

struct employee employees[50];
int numberOfEmp;

void generalMenu();//+
void dataEntry();//+
void daraSort();//+
void dataSearch();//
void dataEdit();//
void dataDelete();//
void printArr();//
void Exitt();//+

int main(void)
{
	setlocale(LC_ALL, "Russian");
	generalMenu();
	return 0;
}

void generalMenu();
{
	system("clear");

	int item = 0;
	
	printf("Ваше действие: \n");
	printf("1 - ввод данных о сотруднике\n");
	printf("2 - сортировка списка по фамилии\n");
	printf("3 - поиск\n");
	printf("4 - редактировать\n");
	printf("5 - удалить сотрудника\n");
	printf("6 - вывод всего списка на экран\n");
	printf("0 - выход\n");
	printf("ваш выбор: \n");

	scanf("%d", &item);

	switch (item)
	{
        case 1:
        {
        	dataEntry();
        	break;
        }

        case 2:
        {
        	daraSort();
        	break;
        }

        case 3:
        {
        	dataSearch();
        	break;
        }

        case 4:
        {
        	dataEdit();
        	break;
        }

        case 5:
        {
        	dataDelete();
        	break;
        }

        case 6:
        {
        	printArr();
        	break;
        }

        case 2020:
        {
        	printf("Под ёлкой вы нашли что-то ещё, но не то что нужно), вам надо еще немного поискать\n");
        	break;
        }

        case 0:
        {
        	Exitt()
        	break;
        }
	}
}

void dataEntry()
{
	memset(employees, 0, sizeof(employees));
    
    system("clear");

    printf("Введите количество сотрудников: ");
    scanf("%d", &numberOfEmp);

    for (int i = 0; i < numberOfEmp; i++)
    {
    	printf("Введите фамилью работника: ");
        scanf("%s\n", employees[i].surname);    

        printf("Введите имя работника: ");
        scanf("%s\n", employees[i].name);  

        printf("Введите отчество работника: ");
        scanf("%s\n", employees[i].patronymic);  

        printf("Введите должность работника: ");
        scanf("%s\n", employees[i].position);  

        printf("Введите год рождения работника: ");
        scanf("%s\n", employees[i].birthyear);  

        printf("Введите заработная плата работника: ");
        scanf("%s\n", employees[i].salary);  	
    }
}

void daraSort();
{
    struct employee temp;

    for (int i = 0; i < numberOfEmp-1; i++) 
    {
        for (int j = i+1; j < numberOfEmp; j++) 
        {
            if (strcmp(employees[i].surname, employees[j].surname) > 0) 
            {
                temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }

    generalMenu();
}

void Exit();
{
	system("clear");
	int num = 0;
	
	printf("Вы действительно хотите выйти?\n (1-да, 0- нет)");
	scanf("%d", &num);

	if(num == 1)
	{
		exit(0);
	}
	else if(num == 0)
	{
        generalMenu();
	}
	else
	{
		printf("вы что-то напутали шифр AES U2FsdGVkX1/FAaqmDYyHQfgPhJB5V4d+m0fFHQKtEvos6BW1mgi59ynxtXIWE/8qA77fED3WYm8PIUEoa+JaVA==\n ЭКСТРЕННОЕ ВОЗВРАЩЕНИЕ В ГЛАВНОЕ МЕНЮ!", );
		//printf("если вы это заметили то значит приманка сработала\n");
		generalMenu();
	}
}