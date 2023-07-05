#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: natural number
 *
 * Return: If n does not have a natural square root,
 * the function should return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_recursion(n, 1));
	}
}
