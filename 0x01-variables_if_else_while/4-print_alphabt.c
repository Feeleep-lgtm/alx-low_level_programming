#include <stdio.h>
/* more headers goes there */
/**
 *main - Entry point
 *
 *Return: Always 0
   */
/* betty style doc for function main goes there */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i == 101 || i == 111)
		{
			continue;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
