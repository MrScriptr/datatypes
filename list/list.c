#include <stdio.h>
#include <stdlib.h>

#include "list.h"

void push(list *arr, void *value) {
  arr->size += 1;
  arr->ptr = realloc(arr->ptr, arr->size * sizeof(void *));
  arr->ptr[arr->size - 1] = value;
}

void listinsert(list *arr, void *value, int position) {
  if (position < 0) {
    position = 0;
  } else if (position > arr->size - 1) {
    position = arr->size;
  }

  void *temp = realloc(arr->ptr, (arr->size + 1) * sizeof(void *));

  if (temp == NULL) {
    fprintf(stderr, "Memory allocation FAILURE!!!!!!!!!!!!!!!\n");
    return;
  }

  arr->ptr = temp;
  arr->size += 1;
  
  for (int i = arr->size - 1; i >= position; i--) {
    arr->ptr[i + 1] = arr->ptr[i];
  }

  arr->ptr[position] = value;
}

list initlist() {
  list newstack;
  newstack.size = 0;
  newstack.ptr = malloc(0);

  return newstack;
}
