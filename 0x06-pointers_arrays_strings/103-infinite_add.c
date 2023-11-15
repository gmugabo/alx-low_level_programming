#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to measure
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
    int len = 0;

    while (s[len] != '\0')
    {
        len++;
    }

    return (len);
}

/**
 * _revstr - reverses a string
 * @s: the string to reverse
 *
 * Return: a pointer to the reversed string
 */

char *_revstr(char *s)
{
    int i = 0, j = _strlen(s) - 1, temp;

    while (i < j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }

    return (s);
}

/**
 * infinite_add - adds two numbers
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size
 *
 * Return: a pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i = _strlen(n1) - 1, j = _strlen(n2) - 1, k = 0, carry = 0, sum, digit;

    while (i >= 0 || j >= 0)
    {
        sum = (i >= 0 ? n1[i] - '0' : 0) + (j >= 0 ? n2[j] - '0' : 0) + carry;

        digit = sum % 10;
        carry = sum / 10;

        r[k] = digit + '0';

        i--;
        j--;
        k++;
    }

    if (carry)
    {
        r[k] = carry + '0';
        k++;
    }

    r[k] = '\0';

    if (_strlen(r) > size_r)
    {
        return (0);
    }

    return (_revstr(r));
}
