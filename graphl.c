#include<stdio.h>
#include<stdlib.h>
struct adjvertex{
    int v;
    struct  adjvertex *next;
};

struct vertex{
    int v;
    struct vertex * next;
    struct  adjvertex *adj;
};


void insert(struct vertex ** head , int data , int * to,int tosize){

    struct  vertex * newnode = (struct vertex*)malloc(sizeof(struct vertex));
    newnode->v=data;
    newnode->next=NULL;
    newnode->adj=NULL;

    if(*head==NULL){
        *head=newnode;
        
    }else{
        
        struct vertex* temp = *head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next = newnode;
        

    }

    for(int i=0;i<tosize;i++){
        
        struct  adjvertex * newadj = (struct adjvertex*)malloc(sizeof(struct adjvertex));
        newadj->v=to[i];
        newadj->next=NULL;
        
        if(newnode->adj==NULL){
            newnode->adj=newadj;
        }else{
            struct   adjvertex* ptr = newnode->adj;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=newadj;
        }
    }

}


void printVertex(struct vertex ** head){
    struct vertex * ptr = *head;
    while (ptr!=NULL)
    {
        printf("%d ",ptr->v);

        struct  adjvertex * edgelist = ptr->adj;
        while (edgelist!=NULL)
        {
            /* code */
            printf("->%d",edgelist->v);
            edgelist=edgelist->next;

        }
        printf("\n|\n");
        ptr=ptr->next;
    }
    
}


int main(){

    struct vertex  * head = NULL ;

    int arr[]={2,3};
    insert(&head,1,arr,2);

    int arr1[]={3};
    insert(&head,2,arr1,1);


    int arr2[]={1};
    insert(&head,3,arr2,1);
    printVertex(&head);

    return 0;
}
