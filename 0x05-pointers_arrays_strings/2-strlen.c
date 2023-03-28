#include "main.h"

/**
 * _strlen - checks the lenght of the string
 * @s: sring to be checked
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int string_lenght = 0;

	while (s[string_lenght])
		string_lenght++;
	return (string_lenght);
}
