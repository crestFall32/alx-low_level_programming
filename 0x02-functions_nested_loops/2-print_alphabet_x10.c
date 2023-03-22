#include <stdio.h>
/**
 * main - prints alphabet ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char l;

	for (i = 0; 1 <= 9; 1++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
	}
	_putchar('\n');
}
