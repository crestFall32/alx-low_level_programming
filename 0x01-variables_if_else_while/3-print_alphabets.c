#include <stdio.h>
/**
 * main -  print the alphabet in lower and upper case
 * Return: 0 (success)
 */
int main(void)
{
	int a, i, lower, upper;
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	int i = 0;
	int a = 0;

	while (lower[i] != '\0')
	{
		putchar(lower[i]);
		i++;
	}
	while (upper[a] != '\0')
	{
		putchar(upper[a]);
		a++;
	}
return (0);
}
