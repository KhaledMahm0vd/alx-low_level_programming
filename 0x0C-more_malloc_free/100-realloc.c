#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
 void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) {
  char *ptr1;
  char *old_ptr;
  unsigned int i;

  // Check if the new size is the same as the old size
  if (new_size == old_size) {
    return ptr;
  }

  // Check if the new size is 0 and the pointer is not NULL
  if (new_size == 0 && ptr != NULL) {
    free(ptr);
    return NULL;
  }

  // Check if the pointer is NULL
  if (ptr == NULL) {
    return malloc(new_size);
  }

  // Allocate new memory for the pointer
  ptr1 = malloc(new_size);

  // Check if the memory allocation failed
  if (ptr1 == NULL) {
    return NULL;
  }

  // Copy the old data to the new memory
  old_ptr = ptr;
  if (new_size < old_size) {
    for (i = 0; i < new_size; i++) {
      ptr1[i] = old_ptr[i];
    }
  } else {
    for (i = 0; i < old_size; i++) {
      ptr1[i] = old_ptr[i];
    }
  }

  // Free the old memory
  free(ptr);

  // Return the pointer to the new memory
  return ptr1;
}

