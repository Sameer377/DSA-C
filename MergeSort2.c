#include<stdio.h>

void merge(int arr[],int si,int mid,int ei){

    int merge[ei-si+1];

    int idx1=si;
    int idx2=mid+1;
    int x = 0;

    while(idx1<=mid && idx2<=ei){
        if(arr[idx1]<=arr[idx2]){
            merge[x]=arr[idx1];
            x++;idx1++;
        }else{
            merge[x]=arr[idx2];
            x++;idx2++;
        }
    }

    while(idx1<=mid){
         merge[x]=arr[idx1];
            x++;idx1++;
    }

    while(idx2<ei){
         merge[x]=arr[idx2];
            x++;idx2++;
    }

    for(int i=0,j=si;i<(sizeof(merge)/sizeof(merge[0]));i++,j++){
        arr[j]=merge[i];
    }

}
void divide(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }

    int mid = si+(ei-si)/2;
   

    divide(arr,si,mid);
    divide(arr,mid+1,ei);

    merge(arr,si,mid,ei);

}

void main(){
    int arr[]={9,8,7,6,5,4,3,2,1};

    divide(arr,0,8);
    printf("\nArray : ");
    for(int k=0;k<9;k++){
        printf("%d ",arr[k]);
    }
}