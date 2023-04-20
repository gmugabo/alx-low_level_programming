#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name with pointer to fuction
 * @name: string to add
 * @f: pointer to function
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
