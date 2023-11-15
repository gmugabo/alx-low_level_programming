#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string
 *
 * Return: the length of the string
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
 * _is_palindrome_helper - helper function to check if s[i] and s[j] are equal
 * @s: pointer to the string
 * @i: the left index
 * @j: the right index
 *
 * Return: 1 if s is a palindrome, 0 if s is not a palindrome
 */

int _is_palindrome_helper(char *s, int i, int j)
{
    if (i >= j)
    {
        return (1);
    }

    else if (s[i] != s[j])
    {
        return (0);
    }
    else
    {
        return (_is_palindrome_helper(s, i + 1, j - 1));
    }
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: pointer to the string
 *
 * Return: 1 if s is a palindrome, 0 if s is not a palindrome
 */

int is_palindrome(char *s)
{
    if (*s == '\0')
    {
        return (1);
    }
    else
    {
        return (_is_palindrome_helper(s, 0, _strlen_recursion(s) - 1));
    }
}
