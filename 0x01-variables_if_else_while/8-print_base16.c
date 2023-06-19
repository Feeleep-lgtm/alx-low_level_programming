#include <stdio.h>
/**
  *main - Entry point
  *
  *Return: Always 0;
  */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 97; n++)
	{
		putchar(n);
	}
	for (m = 'a'; m <= 'f'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
