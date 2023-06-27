#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int l = 0;
	int i = 0;
	char *x = str;
	int j;

	while (*x != '\0')
	{
		x++;
		l++;
	}
	i = l - 1;
	for (j = 0; j <= i ; j++)
	{
		if (j % 2 == 0)
	{
		_putchar(str[j]);
	}
	}
	_putchar('\n');
}

