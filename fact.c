#include<stdio.h>
int fact(int  n){
    int  res=1;
    if(n>0){
        res = n*fact(n-1);
    }
    return res;
}

void main(){
        int n=5; 
        int res=1;
        for(int i=1;i<=n;i++){
            res=res*i;
        }
        printf("%d",res);
}