#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int a, b;
	puts("������� ����� ��������������");
	scanf("%d", &a);
	puts("������� ������ ��������������");
	scanf("%d", &b);
	printf("������� �������������� ����� %d\n", a * b);
	printf("�������� �������������� ����� %d", a + b + a + b);
}