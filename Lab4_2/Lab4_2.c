#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
void task1();

int main()
{
	setlocale(LC_ALL, "RUS");
	int a = 11, b = 3, x = a/b;
	float z = a / b;
	printf("x = %d",x);
	(float)a;
	(float)b;
	float y = a / b;
	printf("y = %f", y);

	task1();

}

void task1()
{
	int i;
	float f;
	double d;
	char c;
	printf("¬ведите значение типа char\n");
	scanf("%c", &c);
	printf("¬ведите значение типа double\n");
	scanf("%lg", &d);
	printf("¬ведите значение типа int\n");
	scanf("%d", &i);
	printf("¬ведите значение типа float\n");
	scanf("%g", &f);
	printf("Int = %d\n", i);
	printf("Float = %f\n", f);
	printf("Double = %lg\n", d);
	printf("Char = %c\n", c);

}