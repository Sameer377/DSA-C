#include <stdio.h>
int Queue[5];
int MAX = 4;
int START = 0;
int END = 0;
void inQueue()
{
    if (END <= MAX)
    {
        printf("Enter element : ");
        int element;
        scanf("%d", &element);
        Queue[END] = element;
        END = END + 1;
    }
    else if (END > MAX)
    {
        printf("Queue Overflow...");
    }
}
void deQueue()
{
    if (END == 0 || START == END)
    {
        printf("Queue is Empty...");
    }
    else if (START != END)
    {
        START = START + 1;
        printf("Element Deleted ... ");
    }
}
void show()
{
    if (END == 0 || START == END)
    {
        printf("Queue is Empty...");
    }
    else
    {
        for (int i = START; i < END; i++)
        {
            printf(" %d ", Queue[i]);
        }
        printf("\n");
    }
}
void recentDeleted()
{
    if (START == 0)
    {
        printf("no record found...");
    }
    else
    {
        printf("%d", Queue[START - 1]);
    }
}
void main()
{
    int loop = 1;
    while (loop == 1)
    {
        printf("\n1.Inqueue\n2.Dequeue\n3.Show\n4.Recent Deleted\n5.Exit\n");
        printf("Enter Your Choice : ");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            inQueue();
            break;
        case 2:
            break;
        case 3:
            show();
            break;
        case 4:
            recentDeleted();
            break;
        case 5:
            loop = 0;
            break;
        default:
            printf("Invalid Choice ...");
            break;
        }
    }
}
