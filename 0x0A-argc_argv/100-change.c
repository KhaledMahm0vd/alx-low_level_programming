#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
  int num, coin, coins_needed, i;
  int coins[] = {25, 10, 5, 2, 1};

  if (argc != 2)
  {
    printf("Error\n");
    return 1;
  }

  num = atoi(argv[1]);
  coins_needed = 0;

  for (i = 0; i < 5 && num > 0; i++)
  {
    coin = coins[i];
    while (num >= coin)
    {
      coins_needed++;
      num -= coin;
    }
  }

  printf("%d\n", coins_needed);
  return 0;
}

