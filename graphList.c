#include<stdio.h>
#include<stdlib.h>
struct adjvertex{
    int data;
    struct adjvertex * next;
};

struct vertex{
    int data;
    struct  adjvertex * firstedge;
    struct  vertex * next;
};

void insertVertex(struct vertex ** head ,int v,int * to,int tosize,int * from,int fromsize){

struct vertex * newv=malloc(sizeof(struct  vertex));
newv->data = v ;
newv->firstedge =NULL;
newv->next = NULL;

if(*head ==NULL){
    *head = newv;
    return;
}

struct vertex * ptr = *head;
while(ptr->next!=NULL){
    ptr=ptr->next;
}

ptr->next = newv;

for(int j = 0;j<tosize;j++){
    struct adjvertex * p = newv->firstedge;
      struct adjvertex * newadjver = malloc(sizeof(struct adjvertex));
        newadjver->next = NULL;
        newadjver->data = to[j];

    if(newv->firstedge==NULL){
        newv->firstedge=newadjver;

    }else{
   

    while(p->next!=NULL){
        p=p->next;
    }
    p->next = newadjver;
    }

   
}


for(int i=0;i<fromsize;i++){
    struct vertex * ptr1 = *head;
    while(ptr1->data!=from[i]){
        ptr1 = ptr1->next;

        if(ptr1->next==NULL){
            break;
        }
    }

    if(ptr1->data==from[i]){

        struct adjvertex * temp = ptr1->firstedge;

        struct adjvertex * newadjver = malloc(sizeof(struct adjvertex));
        newadjver->next = NULL;
        newadjver->data = v;
        if(ptr->firstedge==NULL){
            
            temp = newadjver;
        }else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = newadjver;

        }
    }else{
        printf("ele not found");
      
    }
}
}

void printVertex(struct vertex ** head){
    struct vertex * ptr = *head;
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);

        struct  adjvertex * edgelist = ptr->firstedge;
        while (edgelist!=NULL)
        {
            /* code */
            printf(" %d",edgelist->data);
            edgelist=edgelist->next;

        }
        printf("\n");
        ptr=ptr->next;
    }
    
}


int main(){
    struct vertex * head = NULL;
    int arr[]={3};
    insertVertex(&head,1,arr,1,NULL,0);   
    int arr1[]={1,2};
    insertVertex(&head,2,arr,1,NULL,0);
    insertVertex(&head,3,arr1,2,NULL,0);
    printVertex(&head);
}

