#include <stdio.h>

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


void main()
{
 int arr[]={5,6,1,2,3};
 int size=sizeof(arr)/sizeof(arr[0]);
 Bubblesort(arr,size);
 printf("\nSorted Array : ");
 for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
 } 
}

