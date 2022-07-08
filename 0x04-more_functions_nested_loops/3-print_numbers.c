#include <stdio.h>
/**
 * print_numbers - function that checks for uppercase character.
 * Return: 0
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
putchar('\n');
}
