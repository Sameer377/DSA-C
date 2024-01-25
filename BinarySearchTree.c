#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * l,*r;
};

void insert(struct node ** root, int data){

    struct node * new_node =malloc(sizeof(struct node ));
    new_node->data=data;
    new_node->l=NULL;
    new_node->r=NULL;

    if(*root==NULL){
        *root=new_node;
        return;
    }

    struct node * ptr=*root;
    struct node * parent;

    while(ptr!=NULL){
        parent = ptr;
        if(data<ptr->data){
            ptr=ptr->l;
        }else if(data>ptr->data){
            ptr=ptr->r;
        }
    }

      if(data<parent->data){
        parent->l = new_node;
    } else {
        parent->r = new_node;
    }
}

void search(struct node ** root,int data){
    struct node * ptr = * root;
    while(ptr->data != data)
    {  
        if(data<ptr->data){
            if(ptr->l==NULL){
                printf("\nNot found...");
                return;
            }else{
            ptr=ptr->l;
            }
        }else if (data>ptr->data)
        {
             if(ptr->r==NULL){
                printf("\nNot found...");
                return;
            }else{
            ptr=ptr->r;
            }
        }
    }

    if(ptr!=NULL&& ptr->data == data){
        printf("\nElement Found...");
    }

}

void inorder(struct node * root){
    if(root==NULL)
        return;

    inorder(root->l);
    printf("%d ",root->data);
    inorder(root->r);
}

int countLeafNode(struct node * root){
    if(root==NULL){
        return 0;
    }else if(root->l==NULL && root->r==NULL){
        return 1;
    }else{
        return countLeafNode(root->l)+countLeafNode(root->r);
    }
}
int countNonLeafNode(struct node * root){
    int c=0;
    if(root==NULL){
        printf("%d : NULL Node \n",c);
        return c;
    }else if(root->l!=NULL && root->r!=NULL){
        c=    1+ countNonLeafNode(root->l)+countNonLeafNode(root->r);
        printf("%d : Parent Node [%d]\n",c,root->data);
        return c;

    }else{

        c= countNonLeafNode(root->l)+countNonLeafNode(root->r);
        printf("%d : Leaf Node [%d]\n",c,root->data);
        return c;
    }
}


int main(){
    struct node * root =NULL;
    insert(&root,4);
    insert(&root,2);
    insert(&root,5);
    insert(&root,1);
    insert(&root,7);
    insert(&root,6);
    insert(&root,8);

    printf("Inorder traversal of the constructed tree is \n");


     countNonLeafNode(root);

    return 0;
}