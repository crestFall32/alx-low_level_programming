#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks for s digit
 * @c: the digit
 *
 * Return: 0 if it's a digit, else 0
 */
int _isdigit(int c)
{
	if(c >= 0 && c <=9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
