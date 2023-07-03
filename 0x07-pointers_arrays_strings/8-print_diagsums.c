#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * @a: matrix of integers
 * @size: size of matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int d, g1 = 0, g2 = 0, m, s1, s2;

	for (d = 0; d <= (size - 1); d++)
	{
		s1 =  (size + 1) * d;
		g1 = g1 + *(a + s1);
	}

	for (m = 1; m <= size; m++)
	{
		s2 = (size - 1) * m;
		g2 = g2 + *(a + s2);
	}
	printf("%d, %d\n", g1, g2);
}
