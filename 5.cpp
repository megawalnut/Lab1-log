#include <stdio.h>
#include <string.h>
#include<locale.h>

int main () 
{
	setlocale (LC_CTYPE,"Russian");

	struct student 
	{
		char surname[15];
		char name[15];
		int age;
		char falucty[15];
	}stud[3];

	char person[15];
	for (int i = 0; i < 3; i++)
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

	printf("Введите фамилию студента, для поиска: \n");
	scanf("%s", person);
	
	for (int i = 0; i < 3; i++)
	{
		if (strcmp(person, stud[i].surname) == 0)
		{
			printf("Фамилия: %s\n", stud[i].surname);
			printf("Имя: %s\n", stud[i].name);
			printf("Возраст: %d\n", stud[i].age);
			printf("Факультет: %s\n", stud[i].falucty);
			return 0;
		}
		else
			printf("Нет такого пользователя!");
	}
	return 0;
}