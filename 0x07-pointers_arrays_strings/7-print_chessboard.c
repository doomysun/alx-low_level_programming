#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard
 * @a: array of characters to be displayed
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int d, m;

	for (d = 0; d <= 7; d++)
	{
		for (m = 0; m <= 7; m++)
		{
			_putchar(a[d][m]);
		}
		_putchar('\n');
	}
}
