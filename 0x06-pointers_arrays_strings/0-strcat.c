#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int d = 0, n = 0;

	while (*(dest + d) != '\0')
		d++;

	while (*(src + n) != '\0' && d < 97)
	{
		*(dest + d) = *(src + n);
		d++;
		n++;
	}
	*(dest + d) = '\0';
	return (dest);
}
