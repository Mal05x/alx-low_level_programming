#include "main.h"

/**
 * _puts - the main function
 * @str: this is the pointer
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
