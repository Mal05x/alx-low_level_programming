#include "main.h"

/**
 * print_rev - the main function
 * @s: the pointer
 */
void print_rev(char *s)
{
	int len = 0, index;

	for (index = 0; s[index] != '\0'; index++)
		len++;
	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
