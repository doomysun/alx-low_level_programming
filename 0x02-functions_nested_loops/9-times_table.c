#include "main.h"
/**
* times_table - start of the program
* Description: will print the 9 times table
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
				_putchar(',');
				_putchar(' ');
				_putchar(e + '0');
				_putchar(i + '0');
			}
			else
			{
				if (u != 0)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
			_putchar(m + '0');
			}
		}
			_putchar('\n');
	}
}
