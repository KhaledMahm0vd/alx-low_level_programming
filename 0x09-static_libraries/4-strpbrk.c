#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: stringcontaining the bytes to look for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
  for (; *s != '\0'; s++)
  {
    for (char *p = accept; *p != '\0'; p++)
    {
      if (*s == *p)
        return (s);
    }
  }

  return NULL;
}

