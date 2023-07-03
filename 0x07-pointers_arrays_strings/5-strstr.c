#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: source string
 * @needle: searching string
 * Description: function finds the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes (\0) are not compared
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && coincidence(haystack, needle) == 1) || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}
 /* @a: source string
 * @b: string to be searched
 *
 * Return: 1 if there is coincidence, otherwise 0.
 */
int coincidence(char *a, char *b)
{
	while (*b && *b == *a)
	{
		b++;
		a++;
	}

	if (*b == '\0')
		return (1);
	else
		return (0);
}
