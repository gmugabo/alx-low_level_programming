#include "main.h"

/**
 * cap_string - capitalises all words of a string
 * @s: pointer to string
 *
 * Return: pointer to s
 */

char *cap_string(char *s)
{
	int string_no;

	string_no = 0;
	while (s[string_no] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[string_no] == ' ' || s[string_no] == '\t' || s[string_no] == '\n' || s[string_no] == ',' || s[string_no] == ';' || s[string_no] == '.' || s[string_no] == '.' || s[string_no] == '!' || s[string_no] == '?' || s[string_no] == '"' || s[string_no] == '(' || s[string_no] == ')' || s[string_no] == '{' || s[string_no] == '}')
		{
			if (s[string_no + 1] >= 97 && s[string_no + 1] <= 122)
			{
				s[string_no + 1] = s[string_no + 1] - 32;
			}
		}
		string_no++;
	}
	return (s);
}
