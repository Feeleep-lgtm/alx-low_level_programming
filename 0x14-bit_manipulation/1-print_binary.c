#include "main.h"

/**
 * print_binary - prin binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int x, count = 0;
	unsigned long int currentNum;

	for (x = 63; x >= 0; x--)
	{
		currentNum = n >> x;

		if (currentNum & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}


