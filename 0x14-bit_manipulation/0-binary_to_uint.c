#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: the string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int u = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		u = (u << 1) | (*b - '0');
		b++;
	}
	return (u);
}
