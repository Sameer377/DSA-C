#include<stdio.h>
void sort(int arr[],int start,int end){
    int  pivot=start;
    int i=start;
    int j=end;
    if(start<end){
    while(i<j){
    while(arr[i]<=arr[pivot])
    {
        i++;
    }
    while(arr[j]>arr[pivot]){
        j--;
    }
    if(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    }
    int temp1=arr[pivot];
    arr[pivot]=arr[j];
    arr[j]=temp1;
    sort(arr,start,j-1);
    sort(arr,j+1,end);
    }
}

void main(){
    int arr[]={5,1,4,2,3};
    sort(arr,0,4);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
        /* code */
    }
    
}