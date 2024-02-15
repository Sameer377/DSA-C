#include<stdio.h>

void main(){

    int n = 6;

    for(int i=1;i<=n*2;i++){
        for(int j=1;j<=n*2;j++){
            if(j<=i || j>(n*2)-i ){
            printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }

}