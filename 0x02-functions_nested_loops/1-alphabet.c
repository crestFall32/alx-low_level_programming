#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - a function for ABCs
 * Return: 0 is success
 */
void print_alphabet(void)
{
	char l;

	for (l = n'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
