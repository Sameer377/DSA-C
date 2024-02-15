#include<stdio.h>
#define MAX 10
struct Graph{
    int matrix[MAX][MAX];
    int num_vertices;

};

int main(){
    struct Graph graph;

    graph.num_vertices=3;
    
    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++){
            graph.matrix[i][j]=0;
        }
    }

    graph.matrix[0][0]=1;
    graph.matrix[1][1]=1;
    graph.matrix[2][0]=1;

    for(int i=0;i<graph.num_vertices;i++){
        for(int j=0;j<graph.num_vertices;j++){
            printf("%d ",graph.matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}