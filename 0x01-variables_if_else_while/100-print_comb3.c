#include <stdio.h>
/**
  *main- Entry point
  *
  *Return: Always 0;
  */
int main(void)
{
	int x;
	int y;

	for (x = 48; x <= 57; x++)
	{
		for (y = x + 1; y <= 57; y++)
		{
			putchar(x);
			putchar(y);
			if (x == 56 && y == 57)
			{

				continue;
			}
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');

	return (0);
}
