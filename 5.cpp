#include <stdio.h>
#include <string.h>
#include<locale.h>
#include <stdlib.h>
#define h 3

int main () 
{
	int s = 0;
	setlocale (LC_CTYPE,"Russian");

	struct student 
	{
		char surname[15];
		char name[15];
		int age;
		char falucty[15];
	}stud[h];

	char person[15];
	for (int i = 0; i < h; i++)
	{
		printf("Введите фамилию студента: \n");
		scanf("%s", &stud[i].surname);
		printf("\nВведите имя студента: \n");
		scanf("%s", &stud[i].name);
		printf("\nВведите возраст студента: \n");
		scanf("%d", &stud[i].age);
		printf("\nВведите факультет студента: \n");
		scanf("%s", &stud[i].falucty);
	}

	printf("Введите фамилию ,имя, возраст, факультет студента, для поиска: \n");
	scanf("%s", person);
	
	for (int i = 0; i < h; i++)
	{
		if (strcmp(person, stud[i].surname) == 0)
		{
			printf("Фамилия: %s\n", stud[i].surname);
			printf("Имя: %s\n", stud[i].name);
			printf("Возраст: %d\n", stud[i].age);
			printf("Факультет: %s\n", stud[i].falucty);
		}
		if (strcmp(person, stud[i].name) == 0)
		{
			printf("Фамилия: %s\n", stud[i].surname);
			printf("Имя: %s\n", stud[i].name);
			printf("Возраст: %d\n", stud[i].age);
			printf("Факультет: %s\n", stud[i].falucty);
		}
		if (atoi(person) == stud[i].age)
		{
			printf("Фамилия: %s\n", stud[i].surname);
			printf("Имя: %s\n", stud[i].name);
			printf("Возраст: %d\n", stud[i].age);
			printf("Факультет: %s\n", stud[i].falucty);
		}
		if (strcmp(person, stud[i].falucty) == 0)
		{
			printf("Фамилия: %s\n", stud[i].surname);
			printf("Имя: %s\n", stud[i].name);
			printf("Возраст: %d\n", stud[i].age);
			printf("Факультет: %s\n", stud[i].falucty);
		}
		else
		{
			s++;		
		}
	}
	if (s == h)
		printf("Такого студента нет!\n");
	return 0;
}