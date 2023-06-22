#include "main.h"

/**
* print_diagonal - prints diagonal lines
* @n: the number of times the line will be printed
*
* Description:function that draws a diagonal line on the terminal
* Return: empty
*/

void print_diagonal(int n)
{
	int d, m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (d = 0; d < n; d++)
		{
			for (m = 0; m < d; m++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
