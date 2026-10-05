#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
  list main = initlist();

  char str1[] = "Hello";
  char str2[] = "Greetings";
  char str3[] = "Planet";
  char str4[] = "World";

  push(&main, &str1);
  push(&main, &str2);
  push(&main, &str3);
  listinsert(&main, &str4, 1);

  //printing list
  for (int i = 0; i < main.size; i++) {
    if (main.ptr[i] == NULL) {
      printf("NULL\n");
      continue;
    }

    char disp[20];
    snprintf(disp, sizeof(disp), "%s", main.ptr[i]);
    
    printf("%s\n", disp);
  }

  return 0;
}

