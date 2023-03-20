#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lowercase followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}

	n = 'a';

	while (n < 'g')
	{
		putchar(n);
		n++;
	}
	return (0);
}
