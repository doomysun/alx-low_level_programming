#include <stdio.h>

/**
* main - prints numbers
*
* Description: prints the numbers from 1 to 100
* followed by a new line
* multiples of three print Fizz instead of the number
* multiples of five print Buzz
* multiples of both three and five print FizzBuzz
* Each number or word should be separated by a space
* Return: always 0
*/

int main(void)
{
	int d = 0;

	for (d = 1; d <= 100; d++)
	{
		if(d % 3 == 0 && d % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (d % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (d % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", d);
		}	
	}
	return (0);
}
