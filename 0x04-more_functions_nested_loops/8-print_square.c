#include "main.h"

/**
* print_square - prints a square
* @size: the size of the square
*
* Description:a function that prints a square, followed by a new line
* If size is 0 or less, the function should print only a new line
* Use the character # to print the square
* Return: empty
*/

void print_square(int size)
{
	int d, m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (d = 0; d < size; d++)
		{
			for (m = 0; m < size; m++)
			{
			_putchar(35);
			}
		_putchar('\n');
		}
	}
}
