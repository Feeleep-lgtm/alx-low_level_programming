#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to be  searched
 * @index: bit index
 *
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitVal;

	if (index > 63)
	{
		return (-1);
	}

	bitVal = (n >> index) & 1;

	return (bitVal);
}

