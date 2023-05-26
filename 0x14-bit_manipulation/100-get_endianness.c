#include "main.h"

/**
 * get_endianness - check if a machine is little or big endian
 * union - checks the first byte of an int as a char
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
	union
	{
		unsigned int i;
		char c;
	}
	u;
	u.i = 1;
	return (u.c);
}
