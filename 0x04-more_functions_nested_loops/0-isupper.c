#include <stdio.h>
/**
 * _isupper - checks if a chaaracter is upper case
 * @c: character to be checked
 *
 * Return: 0 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
