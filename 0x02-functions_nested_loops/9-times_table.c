#include "main.h"
/**
*main - start of the program
*Description: will print the 9 times table
*Return: none
*/
void times_table(void)
{
	int d, u, m, i, e;

	for (d = 0; d < 10; d++)
	{
		for (u = 0; u < 10; u++)
		{
			m = d * u;
			if (m >= 10)
			{
				i = m % 10;
				e = (m - i) / 10;
				putchar(',');
				putchar(' ');
				putchar(e + '0');
				putchar(i + '0');
			}
			else
			{
				if (u != 0)
				{
				putchar(',');
				putchar(' ');
				putchar(' ');
				}
			putchar(m + '0');
			}
		}
			putchar('\n');
	}
}
