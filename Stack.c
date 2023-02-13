#include <stdio.h>
int max = 4;
int Stack[5];
int top = -1;
void push()
{
    printf("TOP : %d",top);
if(top<max){
    int element = 0;
    printf("Enter Element to push :");
    scanf("%d",&element);
        top = top + 1;
        // printf("TOP : %d",top);
        Stack[top] = element;
        printf("\nElement Added ...\n");
}else{
        printf("\nStack Overflow...\n");
}
}
void pop()
{
if (top!=-1)
{
printf("\n %d Deleted...\n",Stack[top]);
top=top-1;
}
else
{
printf("\n Stack is empty\n");
}
}
void show()
{
for (int i = top; i >= 0; i--)
{
printf("\n %d ", Stack[i]);
}
}
void main()
{
int loop = 1;
while (loop == 1)
{
int c;
printf("\n1.push\n2.pop\n3.show\n4.exit\nChoice : ");
scanf("%d",&c);

switch(c){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            loop = 0;
            break;
        default: printf("\nInvalid Choice...");break;
}
}
}