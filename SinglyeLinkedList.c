#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insert_at_beginning(struct Node** head, int data) {
    struct Node* new_node = malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

void insert_at_end(struct Node** head, int data) {
    struct Node* new_node = malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
        return;
    }

    struct Node* last = *head;
    while (last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;
}

void delete_at_beginning(struct Node** head) {
    if (*head == NULL) {
        return ;
    }

    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

void delete_at_end(struct Node** head) {
    if (*head == NULL) {
        return;
    }

    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }

    struct Node* second_last = *head;
    while (second_last->next->next != NULL) {
        second_last = second_last->next;
    }

    free(second_last->next);
    second_last->next = NULL;
}

void traverse_linked_list(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }
}

int main() {
    struct Node* head = NULL;

    insert_at_beginning(&head, 1);
    insert_at_beginning(&head, 2);
    insert_at_end(&head, 3);
    insert_at_end(&head, 4);

    traverse_linked_list(head);
    printf("\n");

    delete_at_beginning(&head);
    delete_at_end(&head);

    traverse_linked_list(head);

    return 0;
}




