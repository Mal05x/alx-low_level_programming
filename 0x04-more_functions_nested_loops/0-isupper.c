#include "main.h"

/**
 * _isupper - this checks a function
 * @c: character to be checked
 * Return: 1 if correct, 0 if wrong
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
