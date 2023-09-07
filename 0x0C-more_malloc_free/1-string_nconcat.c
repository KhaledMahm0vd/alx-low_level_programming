#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
 char *string_nconcat(char *s1, char *s2, unsigned int n) {
  char *s;
  unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

  // Get the lengths of the two strings
  while (s1 && s1[len1])
    len1++;
  while (s2 && s2[len2])
    len2++;

  // Allocate enough memory for the new string
  if (n < len2)
    s = malloc(sizeof(char) * (len1 + n + 1));
  else
    s = malloc(sizeof(char) * (len1 + len2 + 1));

  // Check if the memory allocation failed
  if (!s)
    return NULL;

  // Copy the first string to the new string
  while (i < len1) {
    s[i] = s1[i];
    i++;
  }

  // Copy the first n characters of the second string to the new string
  while (n < len2 && i < (len1 + n)) {
    s[i++] = s2[j++];
  }

  // Copy the remaining characters of the second string to the new string
  while (n >= len2 && i < (len1 + len2)) {
    s[i++] = s2[j++];
  }

  // Terminate the new string
  s[i] = '\0';

  // Return the new string
  return s;
}

