#include <stdio.h>
/**
  *main - Entry point
  *
  *Return: Always zero
  */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%d, ", i);
		i++;
	}
	putchar('\n');
	return (0);
}
