#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int lab19task1()
{
	char fname[20] = "number.txt";
	float k;
	FILE* out;
	printf("Введите число ");
	scanf("%f", &k);
	printf("Создание файла");
	if ((out = fopen(fname, "a")) == NULL)
	{
		printf("Ошибка");
		return 0;
	}
	fprintf(out, "\n%.2f", k);
	fclose(out);
	return 1;
}
int lab19task2()
{
	getchar ();
	char d, txt [5] = { '.','t','x','t'};
	char fname[30], fpom [30] = "number.txt";
	printf("Введите \"1\", чтобы записать в новый файл\n");
	printf("Введите \"2\", чтобы записать в cуществующий\n");
	scanf("%c", &d);
	switch (d)
	{
	case '1':
		printf("Введите название файла ");
		scanf("%s", fname);
		strcat(fname, txt);
		break;
	case '2':
		strcpy(fname,fpom);
		break;
	default:
		printf("Неизвестная операция.\n");
	}
	float k;
	FILE* out;
	printf("Введите число ");
	scanf("%f", &k);
	if ((out = fopen(fname, "a")) == NULL)
	{
		printf("Ошибка");
		return 0;
	}
	fprintf(out, "\n%.2f", k);
	fclose(out);
	return 1;
}
int main()
{
	setlocale(LC_CTYPE, "RUS");
	char c;
	printf("Введите номер задания лабораторной ");
	scanf("%c", &c);
	switch (c)
	{
	case '1':
		lab19task1();
		break;
	case '2':
		lab19task2();
		break;
	case '3':
		//lab19task3();
		break;
	default:
		printf("Неизвестная операция.\n");
	}
}