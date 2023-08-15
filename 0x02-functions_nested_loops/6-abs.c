#include "main.h"
#include <stdio.h>

/**
 * main - the main function
 * Return: always returns the absolute value of i
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (i);
	}
}
