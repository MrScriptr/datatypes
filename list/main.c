#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
  list main = initlist();

  char nmu[] = "hii";
  int nmu2 = 1;

  push(&main, &nmu);
  push(&main, &nmu);
  push(&main, &nmu);
  listinsert(&main, &nmu2, 1);
  printlist(&main);

  return 0;
}

