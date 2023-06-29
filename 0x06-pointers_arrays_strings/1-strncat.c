#include "main.h"
/**
 * _strncat - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int d = 0, m = 0;

	while (*(dest + d) != '\0')
		d++;

	while (*(src + m) != '\0' && d < 97 && m < n)
	{
		*(dest + d) = *(src + m);
		d++;
		m++;
	}
	*(dest + d) = '\0';
	return (dest);
}
