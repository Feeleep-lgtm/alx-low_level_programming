#include "main.h"

/**
 * binary_to_uint - convert binary numbers to unsigned int
 * @b: string with binary number
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int decimalVal = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
		{
			return (0);
		}
		decimalVal = 2 * decimalVal + (b[x] - '0');
	}

	return (decimalVal);
}

