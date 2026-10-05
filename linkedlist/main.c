#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node* next;
};

void find_front(struct node *head, int data) {
  struct node* next = head->next;

  if (next == NULL) {
    struct node *new = malloc(sizeof(struct node));

    new->data = data;
    new->next = NULL;

    head->next = new;
  } else {
    find_front(head->next, data);
  }
}

void push_front(struct node **head, int data) {
  if (*head == NULL) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    *head = new;
  } else {
    find_front(*head, data);
  }
}

void push_back(struct node **head, int data) {
  if (*head == NULL) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    *head = new;
  } else {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = *head;
    
    *head = new;
  }
}

void printlist(struct node *head) {
  if (head == NULL) {
    return;
  }

  printf("%i\n", head->data);
  printlist(head->next);
}

int main() {
  struct node *head = NULL;

  push_front(&head, 30);
  push_front(&head, 50);
  push_back(&head, 20);
  printlist(head);

  return 0;
}


