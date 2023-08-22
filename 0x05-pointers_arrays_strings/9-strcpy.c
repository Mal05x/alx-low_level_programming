#include "main.h"

/**
 * _strcpy - the main function
 * @src: the pointer
 * @dest: second pointer
 * Return: returns dest
 */
char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
