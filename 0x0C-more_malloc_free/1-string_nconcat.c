#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates bytes of a string to another string
 *
 * @s1: string to join to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to join to s1
 *
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, lng1 = 0, lng2 = 0;

	if (s1)
	{
		while (s1[lng1])
			lng1++;
	}
	if (s2)
	{
		while (s2[lng2])
			lng2++;
	}
	if (n >= lng2)
		n = lng2;
	s = malloc(sizeof(char) * (lng1 + n + 1));
	if (!s)
		return (NULL);
	for (i = 0; i < lng1; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		s[i] = s2[j];
	s[i] = '\0';
	return (s);


}
