#include "main.h"

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to be reversed
 *
 * Return: 1 if it is, 0 if it's not
 */

int is_palindrome(char *s)
{
	int leng = _strlen_recursion(s);

	if (leng <= 1)
	{
		return (1);
	}
	else
	{
		return (helper_palindrome(s, 0, leng - 1));
	}
}

/**
 * _strlen_recursion - length of string using recursion
 * @s: string to be measured
 *
 * Return: length of string plus 1
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}


/**
 * helper_palindrome - function to help is_palindrome
 * @s: string to be calculate
 *@i: compares from 0 going forward
 *@j: compares from leng-1 going backward
 * Return: length of the string
 */

int helper_palindrome(char *s, int i, int j)
{
	if (i >= j)
	{
		return (1);
	}
	else if (s[i] == s[j])
	{
		return (helper_palindrome(s, i + 1, j - 1));
	}
	else
	{
		return (0);
	}
}
