#include "main.h"

/**
 * _isalpha - this is the main fuction
 * Return: 1 if correct, 0 if wrong
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
