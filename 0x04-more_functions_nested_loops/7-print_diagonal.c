#include "main.h"

/**
* print_diagonal - prints diagol lines
* @n: the number of times the line will be printed
* If n is 0 or less, the function should only print a \n
*
* Description:function that draws a diagonal line on the terminal
* where n is the number of times the character \ should be printed
* 
* Return: empty
*/

void print_diagonal(int n)
{
	int d, m;

	if (n <=0)
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
	_putchar('\n');
	}
}
