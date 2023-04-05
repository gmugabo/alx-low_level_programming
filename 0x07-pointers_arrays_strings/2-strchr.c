#include "main.h"

/*
 * _strchr - function that finds a character in a string
 * @s: string being searched
 * @c: character to be found
 *
 * Return: pointer to first occurence if c is found
 * null if it is not found
 */

char *_strchr(char *s, char c)
{
	int fnd;

	for (fnd = 0; s[fnd] >= '\0'; fnd++)
	{
		if (s[fnd] == c)
			return (s + fnd);
	}
	return ('\0');
}
