#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings and returns a pointer
 *
 * @s1: points to first string
 * @s2: points to second string
 *
 * Return: return pointer to concatenated string,
 * return 0 if memory allocation fails
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int lng1, lng2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lng1 = lng2 = 0;

	while (s1[lng1] != '\0')
		lng1++;
	while (s2[lng2] != '\0')
		lng2++;
	concat = malloc((lng1 + lng2 + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);
	for (i = 0; i < lng1; i++)
		concat[i] = s1[i];
	for (i = 0; i < lng2; i++)
		concat[lng1 + i] = s2[i];
	concat[lng1 + lng2] = '\0';

	return (concat);
}
