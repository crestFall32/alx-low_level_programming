#include <stdio.h>
/**
 * main - prints all single digit numbers of base '10'
 * Return: 0 (success)
 */
int main(void)
{
        int n;
	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	
	putchar('\n');
	
	return (0);
}
