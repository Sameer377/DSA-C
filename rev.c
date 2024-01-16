#include<stdio.h>
void main(){

    int arr[4]={1,2,3,4};

    int i=0,j=3;
    while(i<=j){
        int temp= arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }

    
}