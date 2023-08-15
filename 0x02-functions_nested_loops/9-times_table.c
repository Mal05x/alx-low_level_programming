#include "main.h"

/**
 * main - the main function
 * Return: always 0
 */
void times_table(void)
{
	int i;
	int j = 9;

	for (i = 0; i <= 81; i++)
	{
		_putchar((i * j) + '0');
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
	}
	return (0);
}
