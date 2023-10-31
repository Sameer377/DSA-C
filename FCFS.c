#include <stdio.h>

struct Process
{
    int pid;
    int AT;
    int BT;
    int CT;
    int TAT;
    int WT;
};

void printStruct(struct Process m[],int size){
    printf("\n Table ... ");
    printf("\nPID\tAT\tBT\tCT\tTAT\tWT");
    for(int i=0;i<size;i++){
        printf("\n%d\t%d\t%d\t%d\t%d\t%d",m[i].pid,m[i].AT,m[i].BT,m[i].CT,m[i].TAT,m[i].WT);
    }
    printf("\n");

}

void printGantt(struct Process m[],int size){
    printf("\n Gantt Chart: \n");
    for(int i=0 ;i<size;i++){
        printf(" | P%d",m[i].pid);
    }

    printf("\n");
    for(int k=0 ;k<size;k++){
        printf("%d    %d    ",m[k].AT,m[k].CT);
    }
}

void main()
{
    struct Process main[] = {{1, 3, 4}, {2, 5, 3}, {3, 0, 2}};
    //sortProcess(main,3);
    int size=3;
    printStruct(main,3);

    //sorting in assending order
    for(int i=0;i<size-1;i++){
        for(int j=1;j<=size;j++){
        if(main[i].AT>main[j].AT){
          struct Process temp;
          temp=main[i];
          main[i]=main[j];
          main[j]=temp;  
        }
        }
    }

    // sortProcess(&main,3);
    printStruct(main,3);
    for (int i = 0; i < 3; i++)
    {


        //CT
        int ct;
        if (i == 0 && main[i].AT==0)
        {
            ct = 0;
            
        }else if(main[i].AT>0){
            ct=main[i].AT;
        }
        else
        {
            ct = main[i - 1].CT;
        }
      
        ct=ct+main[i].BT;
        main[i].CT=ct;

        //TAT
        main[i].TAT=main[i].CT-main[i].AT;
        //WT
        main[i].WT=main[i].TAT-main[i].BT;
    }
printStruct(main,3);
   

}