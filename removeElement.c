#include<stdio.h>

void main(){

    int arr[5]={1,2,3,4,5};

    for(int i=1;i<5-1;i++){
        arr[i]=arr[i+1];
        if(i==3){
            arr[i+1]=0;
        }
    }

    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

}