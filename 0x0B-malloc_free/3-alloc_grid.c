#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
  int **arr = NULL;
  int i;

  if (height <= 0 || width <= 0)
    return arr;

  arr = malloc(height * sizeof(int *));
  if (arr == NULL)
    return arr;

  for (i = 0; i < height; i++)
  {
    arr[i] = malloc(width * sizeof(int));
    if (arr[i] == NULL)
    {
      for (int j = 0; j < i; j++)
        free(arr[j]);
      free(arr);
      return arr;
    }
  }

  for (i = 0; i < height; i++)
  {
    for (int j = 0; j < width; j++)
    {
      arr[i][j] = 0;
    }
  }

  return arr;
}

