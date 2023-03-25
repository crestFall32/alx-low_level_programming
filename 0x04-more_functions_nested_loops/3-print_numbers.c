#include <stdio.h>
/**
 * print_numbers - well, prints numbers
 * @num: number
 *
 * Return: void
 */
void print_numbers(void)
{
	int num;

	while (num < 10)
	{
		putchar(num);
		num++;
	}
	return (void);
}
