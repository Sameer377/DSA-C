#include<stdio.h>

#define MAX_VERTICES 10

typedef struct {
    int matrix[MAX_VERTICES][MAX_VERTICES];
    int num_vertices;
} DirectedGraph;

void init_graph(DirectedGraph *graph) {
    int i, j;
    graph->num_vertices = 0;
    for (i = 0; i < MAX_VERTICES; i++) {
        for (j = 0; j < MAX_VERTICES; j++) {
            graph->matrix[i][j] = 0;
        }
    }
}

void add_edge(DirectedGraph *graph, int u, int v) {
        graph->matrix[u][v] = 1;
        graph->num_vertices=(graph->num_vertices)+1;
    
}

void print_matrix(DirectedGraph *graph) {
    int i, j;
    for (i = 0; i < graph->num_vertices; i++) {
        for (j = 0; j < graph->num_vertices; j++) {
            printf("%d ", graph->matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    DirectedGraph graph;
    init_graph(&graph);

    // Add edges to the graph
    add_edge(&graph, 0, 1);
    add_edge(&graph, 0, 4);
    add_edge(&graph, 1, 2);
    add_edge(&graph, 2, 3);
    add_edge(&graph, 3, 4);

    // Print the adjacency matrix
    print_matrix(&graph);

    return 0;
}