#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer
 * @n: number
 *
 * Return: n is positive
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
