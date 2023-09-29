#include "main.h"

/**
 * binary_to_uint -This function converts a binary number to unsigned int
 * @b: string containing binary number to be converted
 *
 * Return:  converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int val = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		val = 2 * val + (b[x] - '0');
	}

	return (val);
}






