#include <stdio.h>
int pass = 0;
int arc=0;
void quicksort(int number[], int first, int last)
{
    printf("\n\npass : %d \nf : %d l : %d ", ++pass, first, last);
     printf("\narray %d : ",++arc);
    for (int i = first; i <= last; i++)
        printf(" %d", number[i]);
    int i, j, pivot, temp;
    if (first < last)
    {
        pivot = first;
        
        i = first;
        j = last;
        while (i < j)
        {
            printf("\n\n i : %d j : %d pivot : %d\n", number[i], number[j], number[pivot]);
            printf(" i-> %d",number[i]);
            while (number[i] <= number[pivot] && i < last){
                
                i++;
                printf(" i-> %d",number[i]);
            }
                printf(" j-> %d",number[j]);
            while (number[j] > number[pivot]){
                
                j--;
                printf(" j-> %d",number[j]);
            }
               
            if (i < j)
            {
                 printf("\n\nswap 1 i : %d j : %d", number[i], number[j]);
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
               
            }
        }
        printf("\n\nswap 2 i : %d j : %d", number[pivot], number[j]);
        temp = number[pivot];
        number[pivot] = number[j];
        number[j] = temp;
        
        quicksort(number, first, j - 1);
        quicksort(number, j + 1, last);
    }
}
int main()
{
    int i, count = 10, number[] = {44,33,11,55,77,90,40,99,22,88};

    quicksort(number, 0, count - 1);
    printf("Order of Sorted elements: ");
    for (i = 0; i < count; i++)
        printf(" %d", number[i]);
    return 0;
}