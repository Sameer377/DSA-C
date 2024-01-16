/* 
    Author : Sameer Shaikh
    Date : 31/10/2023
    Aim : Program to convert infix expression into Postfix expression
*/
#include<stdio.h>
#define max 100
int top=-1;
char stack[max];
char expression[max];
int expcount=-1;
int isempty(){
    if (top<0)
    return 1;
     else 
     return 0;

}
void displayexp(){
    printf("\nExpression  : ");
    for(int i = 0 ;i <=expcount;i++){
        printf("%c",expression[i]);
    }
    printf("\n");
}

int isfull(){
    if(top>=max)
    return 1;
else 
return 0;
}
void push(char ele){
    if(isfull()){
        printf("\n stack overflow..");
    }else{
        top++;
        stack[top]=ele;
 }
}
char  pop(){
    char temp;
    if(isempty()){
        printf("stack overflow");
    }else{
    
        top--;
    return (stack[top+1]);
    }
}

void displayop(){
    printf("\nStack : ");
    for(int i=0;i<=top;i++){
        printf("%c ",stack[i]);
    }
}

int precedence(char ele){
    switch(ele){
        case '+':
        case '-': return 1 ; break;
        case '*':
        case '/':
        case '%': return 2; break;
        case '^': return 3; break; 
        default : return 0; break;
    }

}

void postfix(char arr[],int size){

    for(int i=0;i<size;i++)
    {
        if(precedence(arr[i])>0){
            /* Check whether the stack is empty or not if it is empty then push 
            operator without checking any condition.  */
            if(top==-1){
                push(arr[i]);
            }else{
                /* if the operator in exp having higher precedence than operator on the
                top of stack  */
                if(precedence(arr[i])>precedence(stack[top])){
                    push(arr[i]);
                }else{
                    /* if operator on the top of stack is having high precedence than the operator 
                    of exp or both are having equal precedence then pop the ele from stack and append it into exp*/
                    while(top>-1&&(precedence(arr[i])<precedence(stack[top]))||(precedence(arr[i])==precedence(stack[top]))){
                        expcount++;
                        expression[expcount]=pop();
                    }
                    /* after poping all the operator satisfying above condition ; push current operator in stack */
                    push(arr[i]);
                }
            }
            
        }else{
            /* if the element is not a operator then append element in exp */
             expcount++;
             expression[expcount]=arr[i];
        }
    }
    while(top>-1){
        /* append remaining operator from stack into exp */
        expcount++;
        expression[expcount]=pop();
    }
   

}

void displayprefixexp(int length){
    printf("\nExpression  : ");
     /* reverse exp */
    int i=0,j=length-1;
    while (i<=j)
    {
        char temp = expression[i];
        expression[i]=expression[j];
        expression[j]=temp;
        i++;
        j--;
    }

    for(int i = 0 ;i <=expcount;i++){
        printf("%c",expression[i]);
    }
    printf("\n");
}

void prefix(char arr[],int length){

    /* reverse exp */
    int i=0,j=length-1;
    while (i<=j)
    {
        char temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        /* code */
        i++;
        j--;
    }
    

    postfix(arr,length);
    displayprefixexp(length);

}

void main(){
    char arr[]="A*B+C/D";
    int length=(sizeof(arr)/sizeof(arr[0]))-1;

    prefix(arr,length);
}
