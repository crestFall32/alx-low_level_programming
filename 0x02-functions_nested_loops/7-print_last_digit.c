#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 */
int print_last_digit(int n)
{
	n %= 10;
	printf("%d", n);
}
