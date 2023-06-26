#include "main.h"

/**
* swap_int - swaps the values of two integers
* @a: the first integer
* @b: the second integer to be swapped
*
* Return: void
*/

void swap_int(int *a, int *b)
{
	int d = *a;

	*a = *b;
	*b = d;
}
