#include <stdio.h> //Вариант 2
#include <locale.h>

void main()
{
	float n = 3, L = 335;
	setlocale(LC_ALL, "RUS");
	printf("Дано:  %8.0f\n", n);
	printf("%15.0f\n", L);
	puts("            __________");
	printf("Ответ:     %+011f", n / L);
}