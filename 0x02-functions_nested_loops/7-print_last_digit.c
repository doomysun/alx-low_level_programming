#include "main.h"
/**
* print_last_digit - start of the program
* @d: the number that will provide last digit
* Description: will print the last digit of a number
* Return: value of last digit
*/
int print_last_digit(int d)
{
	int i;

	i = d % 10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
