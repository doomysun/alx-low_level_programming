#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int d;

	for (d = 0; d < n && src[d] != '\0'; d++)
		*(dest + d) = *(src + d);
	for ( ; d < n; d++)
		*(dest + d) = '\0';
	return (dest);
}
