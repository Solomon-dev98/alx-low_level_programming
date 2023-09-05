#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * count_words - the main funtion
 * @str: a parameter.
 * Return: NULL.
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (str[i]  == ' ')
		{
			in_word = 0;
		}
	}

	return (count);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */


char **strtow(char *str)
{
	char **words;
	int word_in = 0, word_s = 0, in_word = 0, i, j, num_w = count_words(str), wl;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	words = (char **)malloc((num_w + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && !in_word)
		{
			word_s = i;
			in_word = 1;
		}
		else if ((str[i] == ' ' || str[i + 1] == '\0') && in_word)
		{
			wl = (str[i] == ' ') ? i - word_s : i - word_s + 1;
			words[word_in] = (char *)malloc((wl + 1) * sizeof(char));
			if (words[word_in] == NULL)
			{
				for (j = 0; j < word_in; j++)
				{
					free(words[j]);
				}
				free(words);
				return (NULL);
			}
			strncpy(words[word_in], str + word_s, wl);
			words[word_in][wl] = '\0';
			word_in++;
			in_word = 0;
		}
	}
	words[num_w] = NULL;
	return (words);
}
