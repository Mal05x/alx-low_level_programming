#include "main.h"

/**
 * print_square - the main function
 * @size: this prints a square
 */
void print_square(int size)
{
	int i;

	if (size > 0)
	{
		for ( i = 0; i <= size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
