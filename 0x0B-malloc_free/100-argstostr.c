#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments and returns a pointer
 * to the new string
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to the concatenated string, 0 if memory allocation fail
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int s, j;
	int lng = 0;
	int pos = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (s = 0; s < ac; s++)
	{
		for (j = 0; av[s][j]; j++)
			lng++;
		lng++;
	}
	str = malloc(sizeof(char) * (lng + 1));
	if (str == NULL)
		return (NULL);
	for (s = 0; s < ac; s++)
	{
		for (j = 0; av[s][j]; j++)
		{
			str[pos] = av[s][j];
			pos++;
		}
		str[pos] = '\n';
		pos++;
	}
	str[pos] = '\0';
	return (str);
}
