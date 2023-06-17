#include <stdlib.h>
#include <time.h>
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
	int j = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
