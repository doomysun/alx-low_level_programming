#include "main.h"

/**
* print_array - prints n elements of an array of integers,
* followed by a new line.
* @a: array of integers
* @n: integer to be printed
*
* Return: void
*/

void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < n; d++)
	{
		printf("%d", a[d]);
	if (d != (n - 1))
		printf(", ");
	}
	printf("\n");
}
