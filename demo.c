//write program to demonstrate use of functions in c?

#include<stdio.h>
void main(){
    int i,n=7,c=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }

    (c==2) ? printf("p") : printf("N p");
}
