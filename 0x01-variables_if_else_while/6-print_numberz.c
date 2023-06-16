#include <stdio.h>
  /**
  *main - start of program
  *Return: 0is a good thing
  */
int main(void)
{
	int d=0;

	while(d < 10)
	{
		putchar(d + 48);
		d++;
	}
	putchar('\n');
	return (0);
}
