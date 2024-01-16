#include<stdio.h>
void main(){

    int arr [5] = {1,2,3,4,5},i=0,j=4;

    while(i<=j){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        printf("%d ",i);

        i++;
        j--;
    }
/* 

    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
 */
}