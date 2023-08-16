#include "main.h"

/**
 * print_last_digit - the main function
 * Return: returns i
 */
int print_last_digit(int i)
{
	if ((i % 10) < 0)
	{
		i *= -1;
	}
	else
	{
		_putchar((i % 10) + '0');
	}
	return (i);
}
