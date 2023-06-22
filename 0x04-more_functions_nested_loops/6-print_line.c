#include "main.h"

/**
* print_line - draws a line
* @n: number of times _ should be printed
*
* Description:function that draws a straight line in the terminal
* The line should end with a \n
*
*/

void print_line(int n)
{
	int d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (d = 0; d < n; d++)
		{
		_putchar(95);
		}
	_putchar('\n');
	}
}
