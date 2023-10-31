#include<stdio.h>
#define MAX 100
int stack[MAX];
int top=-1;

void push(int ele){
    if(top>=MAX-1){
        printf("Full");
    }else{
        top++;
        stack[top]=ele;
    }
}

int pop(){
    if(top<0){
        printf("Empty");
        return 0;
    }else{
        return stack[top];
        top--;
    }
}

void display(){
    printf("Stack : ");
    for(int i = top;i>=0;i--){
        printf("%d ",stack[i]);
    }
    printf("\n");
}


void main(){
int num=123;
int temp=num;

while(num>0){
    int r = num%10;
    push(r);
    num/=10;
    printf(num);
}

display();

}