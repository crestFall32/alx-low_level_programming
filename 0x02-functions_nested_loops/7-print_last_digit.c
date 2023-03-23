#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number
 *
 * Return: n, now the last number
 */
int print_last_digit(int n)
{
	int last_digit = abs(n) % 10;
	
	char lnum[] = printf("%d%d\n", last_digit, last_digit);	
	return (lnum);
}
