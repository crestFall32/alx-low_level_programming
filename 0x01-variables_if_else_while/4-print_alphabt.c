#include <stdio.h>
/**
 * main - print the alphabet using putchar
 * Return: 0 (success)
 */

int main(void)
{
        char alpha[] = "abcdfghijklmnoprstuvwxyz\n";
        int i = 0;

        while (alpha[i] != '\0')
        {
                putchar(alpha[i]);
                i++;
        }
return (0);
}
