#include "main.h"

/**
* print_triangle - prints a triangle
* @size: size of the triangle
*
* Description: a function that prints a triangle followed by a new line
* Return: empty
*/

void print_triangle(int size)
{
	int d, n, m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (d = 0; d < size; d++)
		{
			for (n = size - d; n > 1; n--) 
			{
				_putchar(32);
			}
			for (m = 0; m <= d; m++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
