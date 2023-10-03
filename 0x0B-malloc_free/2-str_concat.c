#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
  char *s3;
  size_t len1 = strlen(s1);
  size_t len2 = strlen(s2);

  s3 = malloc(len1 + len2 + 1);
  if (s3 == NULL)
    return NULL;

  memcpy(s3, s1, len1);
  memcpy(s3 + len1, s2, len2 + 1);

  return s3;
}

