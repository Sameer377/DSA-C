#include<stdio.h>
#define max 5
int Q[max];
int f=-1,r=-1;


void enqueue(int ele) {
    if(f==r+1 || f==0 && r==max-1){
        printf("Queue is full\n");  
    }else{
        if(f==-1){
            f++;
        }
        r=(r+1)%max;
        Q[r]=ele; 
    }
}

void deQueue(){
    if(f==-1&& r==-1 || f==r){
        printf("empty");
    }else{
        f=(f+1)%max;
    }
}

void traverse(){
    int i=f;
    printf("\n");
    for(i=f;i!=r;i=(i+1)%max){
        printf("%d ",Q[i]);
    }
    printf("%d ",Q[i]);

}



void main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    enqueue(6);

    traverse();

    deQueue();
    deQueue();
    deQueue();
    
    traverse();

    enqueue(1);
    enqueue(2);
    enqueue(3);

    
    traverse();
}