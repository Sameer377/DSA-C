#include <stdio.h>

void bubbleSort(int * arr , int n){

    for(int  i=1;i<n;i++){{
        if(arr[i-1]>arr[i]){{
            int  temp = arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
        }}
    }}
}

void printArr(int arr[],int  size){

     for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

int main(){
    int arr[]={1,4,2,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    printArr(arr,n);
}