#include <stdio.h>
#include <stdlib.h>

#include "list.h"

void push(list *arr, int value) {
  arr->size += 1;
  arr->ptr = realloc(arr->ptr, arr->size * sizeof(int));
  arr->ptr[arr->size - 1] = value;
}

void insert(list *arr, int value, int position) {
  if (position >= arr->size) {
    push(arr, value);
  } else if (position < 0) {
    insert(arr, value, 0);
  } else {
    arr->size += 1;
    arr->ptr = realloc(arr->ptr, arr->size * sizeof(int));

    for (int i = arr->size - 2; i > position - 1; i--) {
      arr->ptr[i + 1] = arr->ptr[i];
    }

    arr->ptr[position] = value;
  }
}

void pop(list *arr) {
  arr->size -= 1;
  arr->ptr = realloc(arr->ptr, arr->size * sizeof(int));
}

void listremove(list *arr, int position) {
  if (position >= arr->size) {
    pop(arr);
  } else if (position < 0) {
    listremove(arr, 0);
  } else {
    for (int i = position + 1; i < arr->size; i++) {
      arr->ptr[i - 1] = arr->ptr[i];
    }

    arr->size -= 1;
    arr->ptr = realloc(arr->ptr, arr->size * sizeof(int));
  }
}

void printstack(list *arr) {
  printf("[");
  for (int i = 0; i < arr->size - 1; i++) {
    printf("%i, ", arr->ptr[i]);
  }
  printf("%i", arr->ptr[arr->size - 1]);
  printf("]\n");
}

list initstack() {
  list newstack;
  newstack.size = 0;
  newstack.ptr = malloc(0);

  return newstack;
}
