#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicates a string and returns pointer to new copy
 * Description: 'duplicated string'
 * @str: original string
 *
 * Return: pointer to duplicate str
 */

char *_strdup(char *str)
{
	char *dup;
	int leng, j;

	if (str == NULL)
		return (NULL);
	leng = 0;
	while (str[leng] != '\0')
		leng++;
	dup = malloc((leng + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);
	for (j = 0; j < leng; j++)
		dup[j] = str[j];
	dup[j] = '\0';

	return (dup);
}
