#include <stdio.>
/**
 * _islower - checks for lowercase characters
 * Return: 1 if c is lowercase
 * Return: 0 otherwise
 */
int _islower(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
}
