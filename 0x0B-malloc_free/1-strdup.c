#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
		return (NULL);

	dup = malloc(strlen(str) + 1);
	if (dup == NULL)
		return (NULL);

	strcpy(dup, str);

	return (dup);
}

