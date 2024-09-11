#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int a = 3, b = 5;
	puts("_________________________");
	puts("| a * b | a + b | a - b |");
	puts("_________________________");
	puts("¬веди число A");
	scanf("%d", &a);
	puts("¬веди число B");
	scanf("%d", &b);
	printf("______________________________________________\n");
	printf("|     a * b    |    a + b     |    a - b     |\n");
	printf("______________________________________________\n");
	printf("| %3.d * %-3.d | %3.d + %-3.d | %3.d - %-3.d |\n", a, b, a, b, a, b);
	printf("______________________________________________\n");
	printf("|     % -3.d   |    % -3.d    |     %-3.d    |\n", a * b, a + b, a - b);
	printf("______________________________________________\n");
}