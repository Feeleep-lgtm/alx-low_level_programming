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
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
