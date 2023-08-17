#include "main.h"

/**
 *  print_triangle - main function
 *  @size: ths prints a triangle
 */
void print_triangle(int size)
{
	int i;

	if (size > 0)
	{
		for (i = 0; i <= size; i++)
		{
			_putchar('#');
			_putchar('\n');
		}
	}
	else
                {
                        _putchar('\n');
                }
}
