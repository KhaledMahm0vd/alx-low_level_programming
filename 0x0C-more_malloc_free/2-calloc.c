#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * Return: pointer to the memory area
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size) {
  char *ptr = malloc(nmemb * size);
  if (ptr == NULL) {
    return NULL;
  }
  memset(ptr, 0, nmemb * size);
  return ptr;
}

