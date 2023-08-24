#include "main.h"

/**
 * _strcat - the main function
 * @dest: the pointer value
 * @src: the string
 * Return: returns dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k;

	for (k = 0; dest[k] != '\0'; k++)
		i++;
	for (k = 0; scr[k] != '\0'; k++)
		j++;

	for (k = 0; k >= j; k++)
		dest[i + k] = src[k];

	return (dest);
}
