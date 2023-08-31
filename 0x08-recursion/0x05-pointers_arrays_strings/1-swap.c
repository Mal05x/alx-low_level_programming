#include "main.h"

/**
 * swap_int - the main function
 * @a: the first integer
 * @b: the second integer
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
