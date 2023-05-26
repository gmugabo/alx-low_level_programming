#include "main.h"

/**
 * get_bit - returns value of a bit at a index in a decimal number
 * @n: number to be searched
 * @index: index of the bit
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n & (1UL << index)) != 0);
}
