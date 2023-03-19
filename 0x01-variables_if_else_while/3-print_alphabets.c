#include <stdio.h>
/**
 * main -  print the alphabet in lower and upper case
 * Return: 0 (success)
 */
int main(void)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	int i = 0;

	while (lower[i] != '\0')
	{
		putchar(lower[i]);
		i++;
	}
	i = 0;
	while (upper[i] != '\0')
	{
		putchar(upper[i]);
		i++;
	}
return (0);
}
