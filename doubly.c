#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *prev;
  struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

struct node* create_node(int data) {
  struct node *new_node = (struct node*) malloc(sizeof(struct node));
  new_node->data = data;
  new_node->prev = NULL;
  new_node->next = NULL;
  return new_node;
}

void insert_at_beginning(int data) {
  struct node *new_node = create_node(data);
  if (head == NULL) {
    head = tail = new_node;
    return;
  }
  head->prev = new_node;
  new_node->next = head;
  head = new_node;
}

void insert_at_end(int data) {
  struct node *new_node = create_node(data);
  if (tail == NULL) {
    head = tail = new_node;
    return;
  }
  tail->next = new_node;
  new_node->prev = tail;
  tail = new_node;
}

void delete_at_beginning() {
  if (head == NULL) {
    printf("List is empty\n");
    return;
  }
  if (head == tail) {
    free(head);
    head = tail = NULL;
    return;
  }
  head = head->next;
  free(head->prev);
  head->prev = NULL;
}

void delete_at_end() {
  if (tail == NULL) {
    printf("List is empty\n");
    return;
  }
  if (head == tail) {
    free(tail);
    head = tail = NULL;
    return;
  }
  tail = tail->prev;
  free(tail->next);
  tail->next = NULL;
}

void display() {
  if (head == NULL) {
    printf("List is empty\n");
    return;
  }
  struct node *temp = head;
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

int main() {
  insert_at_beginning(10);
  insert_at_beginning(20);
  insert_at_end(30);
  insert_at_end(40);
  display();
  delete_at_beginning();
  delete_at_end();
  display();
  return 0;
}
