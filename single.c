#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

void insertAtBeggning(struct node ** head,int data){
    struct node * new_node=malloc(sizeof(struct node));
    new_node->data=data;
    new_node->next=*head;
    *head=new_node;
}

void insertAtEnd(struct node ** head,int data){
   struct node * new_Node = malloc(sizeof(struct node));
   new_Node->data=data;
   new_Node->next=NULL;

   if(*head==NULL){
    *head=new_Node;
    return;
   }

   struct node * temp = *head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=new_Node;

}

void deleteAtBeggining(struct node **head){
if(*head==NULL){
    return;
}
struct node* temp=*head;
*head=(*head)->next;
free(temp);
}



void traverse(struct node * head){
    struct node * current =head;
    printf("\n");
    while(current!=NULL){
        printf("%d ",current->data);
        current=current->next;
    }
}

void main(){
struct node * head=NULL;

insertAtBeggning(&head,1);
insertAtBeggning(&head,2);
insertAtEnd(&head,4);
insertAtEnd(&head,5);
traverse(head);
deleteAtBeggining(&head);
// deleteAtEnd(head);
traverse(head);

}