#ifndef LIST_H
#define LIST_H

typedef struct {
  int size;
  void **ptr;
} list;

void push(list *arr, void *value);
void listinsert(list *arr, void *value, int position);
void printlist(list *arr);
list initlist();

#endif
