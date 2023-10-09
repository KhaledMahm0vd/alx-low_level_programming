#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	char *arg = NULL;
	int i, j, k;
	size_t size = 0;

	for (i = 0; i < ac; i++)
	{
	size += strlen(av[i]) + 1;
	}

	arg = malloc(size);
	if (arg == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
		{
		for (j = 0; av[i][j]; j++)
			{
			arg[k] = av[i][j];
			k++;
		}
	arg[k] = '\n';
	k++;
	}

	arg[k] = '\0';

	return (arg);
}

