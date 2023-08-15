#include "main.h"

/**
 * print_sign - the main function
 * Return: 1 if no is > zero,
 * 	   0 if no is = zero,
 * 	   -1 if no is < zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (0);
	}
	else if (n = 0)
	{
		_putchar('0');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
