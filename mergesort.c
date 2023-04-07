#include<stdio.h>

void conquer(int arr[],int si,int mid,int ei){
    int size=(sizeof(arr)/sizeof(int));
    int merge[(ei-si)+1];

    int indx1=si;
    int indx2=mid+1;
    int x = 0;

    while(indx1<=mid && indx2<=ei){
        if(arr[indx1]<=arr[indx2]){
            merge[x++]=arr[indx1++];
        }
        else{
            merge[x++]=arr[indx2++];
            
        }
    }

    while(indx1<=mid){
        merge[x++]=arr[indx1++];
    }

    while(indx2<=ei){
        merge[x++]=arr[indx2++];   
    }

    for(int i=0,j=si;i<size;i++,j++){
        arr[j]=merge[i];
    }

}
void divide(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }

    int mid=si+(ei-si)/2;

    divide(arr,si,mid);
    divide(arr,mid+1,ei);
    conquer(arr,si,mid,ei);
}

void main(){
    int srt[]={9,8,7,6,5,4,3,2,1};
   
    divide(srt,0,8);

    for(int k =0 ;k<9;k++){
        printf("%d ",srt[k]);
    }

}