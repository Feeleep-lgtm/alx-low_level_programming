#include "main.h"
/**
   *swap_int - swaps values of two integers
   *@a: integer to swap
   *@b: integer to swap
   *Return a, and b
   */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
