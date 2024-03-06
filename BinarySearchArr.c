#include <stdio.h>

int binarySearch(int arr[], int size, int num){
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == num)
            return mid;
        else if (arr[mid] < num)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

void printArr(int arr[],int  size){

     for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

void Bubblesort(int arr[],int size){
    
    printf("Size : %d",size);
    for(int i=0;i<size-1;i++){
        
        for(int j=i+1;j<size;j++){
    
            if(arr[i]>arr[j]){
                
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                
                
            }
        }
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    Bubblesort(arr,n);
    printArr(arr,n);
    int num = 4;
    int result = binarySearch(arr, n, num);
    if(result == -1)
        printf("Element not found.\n");
    else
        printf("Element found at index: %d\n", result);
}