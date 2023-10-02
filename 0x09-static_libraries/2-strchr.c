#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
  for (; *s != c && *s != '\0'; s++);
  return (*s == c) ? s : NULL;
}


