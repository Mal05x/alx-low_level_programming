#include "main.h"

/**
 * _puts - the main function
 * @str: this is the pointer
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
