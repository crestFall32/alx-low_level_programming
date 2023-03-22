#include <stdio.h>
#include "main.h"
/**
 * main - a function for ABCs
 * Return: 0 is success
 */
void print_alphabet(void)
{
	char l;

	for (l ='a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
