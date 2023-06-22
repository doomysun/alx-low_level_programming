#include "main.h"
#include <stdio.h>

/**
* main - prints numbers
*
* Description: prints the numbers from 1 to 100
* Return: always 0
*/

int main(void)
{
	int d;

	for (d = 1; d <= 100; d++)
	{
		if ((d % 3 == 0) && (d % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (d % 3 == 0)
		{
			printf("Fizz");
		}
		else if (d % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", d);
		}
		if (d != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
