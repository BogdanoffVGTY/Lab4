#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	char c = '!';
	printf("�������� ���� int ����� %d\n",i);
	printf("�������� ���� float ����� %g\n",f);
	printf("�������� ���� double ����� %g\n",d);
	printf("�������� ���� char ����� %c", c);
}