#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int top = -1;
int stack[MAX];
void push(int ele){
    top=top+1;
    stack[top]=ele;
}

int pop(){
   int item= stack[top];
    top=top-1;
    return item;
}

int isDigit(char c){
return c>='0' && c<='9';
}

int evaluate(char arr[]){
for(int i=0;arr[i]!=')';i++){
    if(isDigit(arr[i])){
        push(arr[i]-'0');
    }
    else{
        int b=pop();
        int a=pop();
        switch(arr[i]){
            case '+':push(a+b);
                        break;
            case '-':push(a-b); break;

            case '*' : push(a*b); break;
            case '/' : push(a/b); break;
            default : printf("Invalid Operator.."); exit(1);
        }
    }
}

return pop();
}

void main(){
char arr[100];
scanf("%s",&arr);
printf("result : %d",evaluate(arr));
}