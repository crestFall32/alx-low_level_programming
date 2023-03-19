#include <stdio.h>
/**
 * main - prints all single digit numbers of base '10'
 * Return: 0 (success)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		printf(n);
	}
	printf('\n');
	return (0);
}
