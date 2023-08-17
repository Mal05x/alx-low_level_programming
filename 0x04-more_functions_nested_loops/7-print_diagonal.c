#include "main.h"

/**
 * print_diagonal - the main function
 * @n: draws a diagonal line
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('\');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
