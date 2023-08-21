#include "main.h"

/**
 * print_rev - the main function
 * @s: the pointer
 */
void print_rev(char *s)
{
	int j = 0, i;

	while (s[i++])
	{
		j++;
	}
	for (i = j - 1; j >= 0; j--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
