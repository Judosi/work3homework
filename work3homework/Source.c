#include <stdio.h>
#include<locale.h>
#include <math.h>
#pragma warning(disable : 4996)


void main()
{
	setlocale(LC_ALL, "RUS");
	float a, b, result, result2, f, n;
	puts("������� ��� �����\n");
	scanf("%f", &a);
	scanf("%f", &b);
	result = a * b / 2;
	printf("������� �������������� =%f", result);
	puts("\n������� ��� �����\n");
	scanf("%f", &f);
	scanf("%f", &n);
	result2 = pow(f, 1/n);
	printf("������� �������������� = %f", result2);

	getchar();
}