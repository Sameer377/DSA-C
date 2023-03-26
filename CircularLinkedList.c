#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};

void insert(struct node ** head,int data){
    struct node * new_node = malloc(sizeof(struct node));
    new_node->data=data;
    if(*head==NULL){
        *head=new_node;
        new_node->next=*head;
    }
    else{
        struct node * ptr = *head;
        while(ptr->next!=*head){
            ptr=ptr->next;
        }
        ptr->next=new_node;
        new_node->next=*head;
    }
}

void delete(struct node ** head){
    if(*head==NULL){
        printf("\nEmpty List");
    }else if((*head)->next==*head){
        printf("\n Deleted node : %d",(*head)->data);
        free(*head);
        *head=NULL;
    }
    else{
        struct node * ptr = *head;
        while(ptr->next->next!=*head){
            ptr=ptr->next;
        }
        
        printf("\n Deleted node : %d",(ptr->next)->data);
        free(ptr->next);
        ptr->next=*head;
    }
}

void traverse(struct node * head){
    struct node * ptr = head;
    if(head==NULL){
        printf("\nList is Empty");
    }else{
        printf("\nList : ");
        while(ptr->next!=head){
            printf("-> %d",ptr->data);
            ptr=ptr->next;
        }
        printf("-> %d",ptr->data);
    }
}

void main(){
    printf("Executing");
    struct node * head = NULL;
    insert(&head,1);
    insert(&head,2);
    insert(&head,3);
    insert(&head,4);
    traverse(head);
    delete(&head);
    traverse(head);
    delete(&head);
    delete(&head);
    delete(&head);
    traverse(head);
   
}