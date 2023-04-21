#include "main.h"

/**
 * leet - leet characters
 * @str: pointer to string
 *
 * Return: letter with corresponding leet character
 */

char *leet(char *str)	
{
    char leet_chars[] = "443311007711";
    char letters[] = "aAeEoOtTlL";
    int i, j;

    i = 0;
    while (str[i] != '\0')
    {
	    j = 0;
	    while (j < 100)
	    {
		    if (letters[j] == str[i])
		    {
			    str[i] = leet_chars[j];
		    }
		    j++;
	    }
	    i++;
    }
    return (0);
}

