#include "main.h"

/**
 * _isdigit - Checks for a digit
 * Description: prints 1 for digit characters
 * @c: the character to be checked
 * return: 1 for a digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
