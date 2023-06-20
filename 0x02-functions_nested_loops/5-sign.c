#include "main.h"
/**
* print_sign - print the sign of a number
* @n: the number to be checked for a sign
* Description: will print the sign of a number
* Return: value 1 if is greater than 0, value 0 if is 0 and -1 if less than 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
		_putchar('\n');
}
