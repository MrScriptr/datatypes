#ifndef LIST_H
#define LIST_H

typedef struct {
  int size;
  int *ptr;
} list;

void push(list *arr, int value);
void insert(list *arr, int value, int position);
void pop(list *arr);
void listremove(list *arr, int position);
void printstack(list *arr);
list initstack();

#endif
