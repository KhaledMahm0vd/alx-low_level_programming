#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag = 0, c, w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
	if (s[c] == ' ')
		flag = 0;
	else if (flag == 0)
		{
		flag = 1;
		w++;
		}
	}

	return (w);
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
	char **matrix;
	int i, k = 0, len = 0, words;
	size_t word_len;

	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
		if (word_len > 0)
			{
			matrix[k] = malloc(word_len + 1);
			if (matrix[k] == NULL)
				return (NULL);
			memcpy(matrix[k++], str + start, word_len);
			word_len = 0;
			}
		}
		else
			word_len++;
			start = i + 1;
	}

	matrix[k] = NULL;

	return (matrix);
}

