#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max) {
  int *ptr;
  int i, size;

  // Check if the minimum value is greater than the maximum value
  if (min > max)
    return NULL;

  // Calculate the size of the array
  size = max - min + 1;

  // Allocate memory for the array
  ptr = malloc(sizeof(int) * size);

  // Check if the memory allocation failed
  if (ptr == NULL)
    return NULL;

  // Initialize the array
  for (i = 0; i < size; i++) {
    ptr[i] = min++;
  }

  // Return the pointer to the array
  return ptr;
}

