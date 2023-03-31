#include "main.h"

/**
 * string_toupper - changes all lowercases to uppercases
 * @str: pointer to string
 *
 * Return: pointer to uppercase string
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (0);
}
