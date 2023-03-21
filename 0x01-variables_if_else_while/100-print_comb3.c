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
		for (n = i + 1; n < 10; n++)
		{
			putchar(i + '0');
			putchar(n + '0');
			if (i != 8 || n != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
