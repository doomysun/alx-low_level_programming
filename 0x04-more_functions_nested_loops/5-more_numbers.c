#include "main.h"

/**
* more_numbers - prints numbers
*
* Description: prints 10 times the numbers 0 to 14
*
*/

void more_numbers(void)
{
	int d, m;

	for (d = 0; d < 10; d++)
	{
		for (m = 0; m < 15; m++)
		{
			if (m > 9)
			{
				_putchar((m / 10) + '0');
			}
				_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
