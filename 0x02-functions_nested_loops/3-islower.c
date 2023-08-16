#include "main.h"

/**
 * _islower - this checks alphabets
 * Return: 1 if correct, 0 if wrong
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
