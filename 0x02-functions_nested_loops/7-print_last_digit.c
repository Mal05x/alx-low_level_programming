#include "main.h"

/**
 * main - the main function
 * Return: always 0
 */
int print_last_digit(int i)
{
	if ((i % 10) < 0)
	{
		i = -i;
	}
	else
	{
		_putchar((i % 10) + '0');
	}
	return (0);
}
