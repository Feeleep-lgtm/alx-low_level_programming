#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int x, i, lon;

	lon = 0;

	for (x = 0; str[x] != '\0'; x++)
		lon++;

	i = (lon / 2);

	if ((lon % 2) == 1)
		i = ((lon + 1) / 2);

	for (x = i; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}

