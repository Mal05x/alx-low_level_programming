#include "main.h"

/**
 * _strlen - the main function
 * @s: the pointer
 * Return: returns i
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
	{
		i++;
	}
	return (i);
}
