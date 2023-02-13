#include <stdio.h>

int binarySearch(int arr[], int value)
{

    int start = 0;
    int size = 9;
    int end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if(arr[mid]==value){
            return mid;
        }else if(arr[mid]>value){
            end=mid-1;
        }else{
            end=mid+1;
        }
    }
    return -1;
}

void main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

int searchresult=binarySearch(arr,8);
if(searchresult!=-1){
    printf("Element found at index %d",searchresult);
}else{
    printf("Element not found...");
}
}