#include <stdio.h>
#include "main.h"

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0 (Success), or 1 (Success)
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int atoi(char *s);

int main(int argc, char *argv[])
{
  int sum, num;

  if (argc < 2)
  {
    printf("Error: Invalid number of arguments\n");
    return 1;
  }

  for (int i = 1; i < argc; i++)
  {
    num = atoi(argv[i]);
    if (num < 0)
    {
      printf("Error: Argument %d must be a positive number\n", i);
      return 1;
    }
    sum += num;
  }

  printf("%d\n", sum);
  return 0;
}

int atoi(char *s)
{
  int i, n, len, f, digit;

  i = 0;
  n = 0;
  len = 0;
  f = 0;
  digit = 0;

  while (s[len] != '\0')
    len++;

  while (i < len && f == 0)
  {
    if (s[i] == '-')
      ++f;

    if (s[i] >= '0' && s[i] <= '9')
    {
      digit = s[i] - '0';
      if (f % 2)
        digit = -digit;
      n = n * 10 + digit;
      f = 1;
      if (s[i + 1] < '0' || s[i + 1] > '9')
        break;
      f = 0;
    }
    i++;
  }

  if (f == 0)
    return 0;

  return n;
}
