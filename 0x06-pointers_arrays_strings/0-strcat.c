#include "main.h"

/**
 * _strcat - the main function
 * @dest: the pointer value
 * @src: the string
 * Return: returns dest
 */
char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}
