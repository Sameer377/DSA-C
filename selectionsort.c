#include <stdio.h>
void sort(int arr[],int size)
{

    
    
    for (int i = 0; i < size-1; i++)
    {
        int sm=i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[sm] > arr[j])
            {
                sm=j;
                
            }
        }
        int temp = arr[sm];
        arr[sm]=arr[i];
        arr[i]=temp;
    }
}

void printArr(int arr[],int  size){

     for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

}

void main()
{
    int k[] = {1, 4, 2, 5, 6};
    int size = (sizeof(k) / sizeof(k[0]));
    sort(k,size);
    printArr(k,size);
}