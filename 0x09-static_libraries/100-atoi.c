#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int atoi(char *s)
{
  int i, n, sign;

  i = 0;
  n = 0;
  sign = 1;

  while (s[i] == ' ')
    i++;

  if (s[i] == '-')
  {
    sign = -1;
    i++;
  }

  while (s[i] >= '0' && s[i] <= '9')
  {
    n = n * 10 + (s[i] - '0');
    i++;
  }

  return n * sign;
}

