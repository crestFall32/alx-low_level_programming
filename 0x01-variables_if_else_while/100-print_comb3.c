#include <stdio.h>
/**
 * main -  a program that prints all possible different
 * combinations of two digits.
 * Return: 0 is success
 */
int main(void)
{
	int i, n;

	for (i = 0; i < 9; i++)
	{
		putchar(i + '0');
		for (n = i + 1; n < 10; n++)
		{
			putchar(n + '0');
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
