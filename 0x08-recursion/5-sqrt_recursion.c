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
		return (sqrt_manual(n, 1));
	}
}
/**
 * sqrt_manual - calculate manualy the sqrt of a number.
 * @n: natural number
 * @i: counter or number to be multiplied.
 *
 * Return: sqrt 0 if sqrt is not natural.
 */
int sqrt_manual(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_manual(n, i + 1));
	}
}

