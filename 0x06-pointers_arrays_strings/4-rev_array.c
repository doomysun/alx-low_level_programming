#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: array for comparison
 * @n: size of array
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int s, b = 0, e = n - 1;

	while (b < e)
	{
		s = *(a + b);
		*(a + b) = *(a + e);
		*(a + e) = s;
		b++;
		e--;
	}
}
