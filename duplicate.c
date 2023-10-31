#include<stdio.h>
void main(){
    int arr[]={1,2,3,4,2,3,4,5,2,3,4,5,6,6,4,3,7};
    int size = (sizeof(arr)/sizeof(arr[0]));

    int ele;
    int unique[100][100];
    for(int i=0;i<size-1;i++){
        ele=arr[i];
        for(int j=i+1,k=0;j<size;k++,j++){
            if(ele==arr[j]){
                unique[i][k]=arr[j];
            }
        }
    }

    


}