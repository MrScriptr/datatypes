#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int size;
  int *ptr;
} stack;

void push(stack *arr, int value) {
  arr->size += 1;
  arr->ptr = realloc(arr->ptr, arr->size * sizeof(int));
  arr->ptr[arr->size - 1] = value;
}

void pop(stack *arr) {
  arr->size -= 1;
  arr->ptr = realloc(arr->ptr, arr->size * sizeof(int));
}

void printstack(stack *arr) {
  for (int i = 0; i < arr->size; i++) {
    printf("%i\n", arr->ptr[i]);
  }
}

stack initstack() {
  stack newstack;
  newstack.size = 0;
  newstack.ptr = malloc(0);

  return newstack;
}

int main() {
  stack main = initstack();

  push(&main, 10);
  push(&main, 20);
  push(&main, 30);
  pop(&main);
  printstack(&main);

  return 0;
}
