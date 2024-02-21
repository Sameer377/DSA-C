#include<stdio.h>

void bubbleSort(int * arr,int size){

    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
           if(arr[i]>arr[j]){
             int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
           }
        }
    }

}


void traverse(int * arr,int size){
    printf("Arrar : ");
    for(int i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }    
    printf("\n");
}

void main(){
    int a[]={5,3,8,4,2};

    bubbleSort(a,5);
    traverse(a,5);    
}