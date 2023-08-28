#include "main.h"

/**
 * positive_or_negative - the main function
 * @i: this print numbers
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive", i);

	else if (i == 0)
		printf("%d is zero", i);

	else
		printf("%d is negative", i);
}
