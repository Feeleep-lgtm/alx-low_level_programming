#include <stdio.h>
/* more headers goes there */
/**
 *main - Entry point
 *
 *Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
	}
	putchar('\n');
	return (0);
}
