#include "main.h"

/**
 * set_string - sets value of a pointer to a char
 * @s: pointer to a pointer to a char
 * @to: pointer to a char
 *
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
