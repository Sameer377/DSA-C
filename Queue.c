#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int front=-1;
int rear=-1;
void inQueue(){
    if(front<MAX-1){
        if(rear==-1){
            rear=rear+1;
        }
       printf("\nEnter Element to push : ");
       int ele;
       scanf("%d",&ele);
       front=front+1;
       queue[front]=ele; 
    }else{
        printf("\nQueue is full...");
    }
}

void deQueue(){
    if(rear==front){
        printf("Queue is Empty...");
    }else{
        rear=rear+1;
    }
}

void display(){
    if(rear==front){
        printf("Queue is Empty...");
    }else{
        for(int i=rear;i<=front;i++){
        printf("%d",queue[i]);
    }
    }
    
}

void main(){
while(1){
    printf("\n1.Inqueue\n2.deQueue\n3.display\n4.exit\nChoice : ");
    int ch;
    scanf("%d",&ch);
    switch(ch){
        case 1 : inQueue();
        break;
        case 2 : deQueue();
        break;
        case 3 : display();
        break;
        case 4 : exit(0); break;
        default : printf("Invalid..."); break;
    }
}
}
