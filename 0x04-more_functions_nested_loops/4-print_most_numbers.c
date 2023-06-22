#include "main.h"

/**
* print_most_numbers - prints numbers
*
* Description: prints the numbers 0 to 9 followed by a new line
*
*/

void print_most_numbers(void)
{
	int d;

	for (d = 48; d <= 57; d++)
	{
		if (d == 50 || d == 52)
		{
			continue;
			d++;
		}
		_putchar(d);
	}
	_putchar('\n');
}
