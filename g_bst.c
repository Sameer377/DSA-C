#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * l, *r;
};

void insert(struct node ** root,int data){
    struct node * new_node = malloc(sizeof(struct node));
    new_node->data=data;
    new_node->l=NULL;
    new_node->r=NULL;

    if(*root==NULL)
    {
        *root=new_node;
        return;
    }

    struct node* ptr = *root;
    struct node * parent;
    while(ptr!=NULL){
        parent=ptr;
        if(data<ptr->data){ 
            ptr=ptr->l;
        }else if(data>ptr->data){
            ptr=ptr->r;
        }
    }
    if(data<parent->data){
        parent->l=new_node;
    }else{
        parent->r=new_node;
    }
}

void main(){
    struct node * root = NULL;
    insert(&root,4);
    insert(&root,2);
    insert(&root,1);
    insert(&root,3);
    insert(&root,6);
    insert(&root,5);
    insert(&root,7);

    printf("%d",root->l->l->data);


}