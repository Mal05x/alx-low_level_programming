#include "main.h"

/**
 * _isdigit - the function
 * @c: to be checked
 * Return: 1 if correct, 0 if wrong
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
