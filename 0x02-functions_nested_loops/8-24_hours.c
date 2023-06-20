#include "main.h"
/**
*main - start of the program
*Description: will print every minute of the day of Jack Bauer from 00:00 to 23:59
Return: none
*/
void jack_bauer(void)
{
	int H, h, M, m;

	for (H = 0; H <= 2; H++)
	{
		for (h = 0; h <= 9; h++)
		{
			for (M = 0; M <= 5; M++)
			{
				for (m = 0; m <= 9; m++)
				{
					if (H >= 2 && h >= 4)
						break;
					_putchar(H + 48);
					_putchar(h + 48);
					_putchar(58);
					_putchar(M + 48);
					_putchar(m + 48);
					_putchar('\n');
				}
			}
		}
	}
}
