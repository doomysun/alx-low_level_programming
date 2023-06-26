#include "main.h"

/**
* _strcpy - copies the string pointed to by src,
* including the terminating null byte (\0), to the buffer pointed to by dest
* @dest: value of destination
* @src: value of source
*
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int d;

	for (d = 0; src[d] != '\0'; d++)
		dest[d] = src[d];
	dest[d++] = '\0';
	return (dest);
}
