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
	printf("Значение типа int равно %d\n",i);
	printf("Значение типа float равно %g\n",f);
	printf("Значение типа double равно %g\n",d);
	printf("Значение типа char равно %c", c);
}