#include "main.h"
/**
*main - start of the program
*Description: will print the last digit of a number
*Return: value of last digit
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
