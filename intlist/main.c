#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
  list main = initstack();

  push(&main, 10);

  insert(&main, 5, 0);
  insert(&main, 4, 0);
  insert(&main, 3, 0);
  insert(&main, 2, 0);
  insert(&main, 1, 0);

  listremove(&main, 2);

  printstack(&main);

  return 0;
}

