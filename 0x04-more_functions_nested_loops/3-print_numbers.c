#include "main.h"

/**
* print_numbers - prints numbers
*
* Description: prints numbers from 0 to 9 and a new line
* Return: always 0
*/

void print_numbers(void)
{
	int d;

	for (d = 48; d <= 57; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
}
