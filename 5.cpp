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
		printf("������� ������� ��������: \n");
		scanf("%s", &stud[i].surname);
		printf("\n������� ��� ��������: \n");
		scanf("%s", &stud[i].name);
		printf("\n������� ������� ��������: \n");
		scanf("%d", &stud[i].age);
		printf("\n������� ��������� ��������: \n");
		scanf("%s", &stud[i].falucty);
	}

	printf("������� ������� ,���, �������, ��������� ��������, ��� ������: \n");
	scanf("%s", person);
	
	for (int i = 0; i < h; i++)
	{
		if (strcmp(person, stud[i].surname) == 0)
		{
			printf("�������: %s\n", stud[i].surname);
			printf("���: %s\n", stud[i].name);
			printf("�������: %d\n", stud[i].age);
			printf("���������: %s\n", stud[i].falucty);
		}
		if (strcmp(person, stud[i].name) == 0)
		{
			printf("�������: %s\n", stud[i].surname);
			printf("���: %s\n", stud[i].name);
			printf("�������: %d\n", stud[i].age);
			printf("���������: %s\n", stud[i].falucty);
		}
		if (atoi(person) == stud[i].age)
		{
			printf("�������: %s\n", stud[i].surname);
			printf("���: %s\n", stud[i].name);
			printf("�������: %d\n", stud[i].age);
			printf("���������: %s\n", stud[i].falucty);
		}
		if (strcmp(person, stud[i].falucty) == 0)
		{
			printf("�������: %s\n", stud[i].surname);
			printf("���: %s\n", stud[i].name);
			printf("�������: %d\n", stud[i].age);
			printf("���������: %s\n", stud[i].falucty);
		}
		else
		{
			s++;		
		}
	}
	if (s == h)
		printf("������ �������� ���!\n");
	return 0;
}