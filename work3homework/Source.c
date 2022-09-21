#include <stdio.h>
#include<locale.h>
#include <math.h>
#pragma warning(disable : 4996)


void main()
{
	setlocale(LC_ALL, "RUS");
	float a, b, result, result2, f, n;
	puts("введите два числа\n");
	scanf("%f", &a);
	scanf("%f", &b);
	result = a * b / 2;
	printf("среднее арифметическое =%f", result);
	puts("\nвведите два числа\n");
	scanf("%f", &f);
	scanf("%f", &n);
	result2 = pow(f, 1/n);
	printf("среднее геометрическое = %f", result2);

	getchar();
}