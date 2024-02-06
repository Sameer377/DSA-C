#include<stdio.h>

void main(){

     for(int i=1;i<=5;i++){
        for(int j=1;j<=10;j++){

            if(j<=i || j>10-i){
                printf("* ");
            }else {
                printf("  ");
            }

        }
        printf("\n");
    } 


/*

for(int k = 0;k<=5;k++){
    for(int f=1;f<=10;f++){
        if(f==(10/2)+k || f==(10/2)+1+k){
            printf("__");
        }else
        {
            printf("* ");
        }
    }
    printf("\n");
} 

*/
    

    

}