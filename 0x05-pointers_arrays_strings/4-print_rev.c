#include <stdio.h>
#include "main.h"
/**
 * print_rev -prints a string in reverse
 * @s: a string
 *
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		putchar(s[i]);
	}
	putchar('\n');
}
