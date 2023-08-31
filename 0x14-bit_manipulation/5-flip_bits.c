#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, num = 0;
	unsigned long int nums;
	unsigned long int toFlip = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		nums = toFlip >> x;
		if (nums & 1)
			num++;
	}

	return (num);
}

