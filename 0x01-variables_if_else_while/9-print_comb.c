#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	for (n = 0, n < 10, n++)
	{
		putchar(n);
		if (n != 9)
		{
			putchar(",");
			puchar(" ");
		}
	}
	return (0);
}
