#include "main.h"
/**
 * is_prime_number - determines if number is a prime 
 * @n: integer
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (is_prime_manual(n, 2));
	}
}
