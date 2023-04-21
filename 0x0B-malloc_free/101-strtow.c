#include "main.h"
#include <string.h>
#include <stdlib.h>


/**
 * count_words - counts the number of words in a string
 * @str: string to count words in
 *
 * Return: number of words in str
 */
int count_words(char *str)
{
    int i;
    int in_word = 0;
    int word_count = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            in_word = 0;
        else if (in_word == 0)
        {
            in_word = 1;
            word_count++;
        }
    }

    return (word_count);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success) or NULL (Error)
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k = 0;
    int len = 0;
    int word_count;
    int char_count = 0;
    int start, end;

    while (*(str + len))
        len++;
    word_count = count_words(str);
    if (word_count == 0)
        return (NULL);

    words = malloc(sizeof(char *) * (word_count + 1));
    if (words == NULL)
        return (NULL);

    for (i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (char_count)
            {
                end = i;
                words[k] = malloc(sizeof(char) * (char_count + 1));
                if (words[k] == NULL)
                    return (NULL);
                for (j = start; j < end; j++)
                    words[k][j - start] = str[j];
                words[k][j - start] = '\0';
                k++;
                char_count = 0;
            }
        }
        else if (char_count++ == 0)
            start = i;
    }

    words[k] = NULL;

    return (words);
}
