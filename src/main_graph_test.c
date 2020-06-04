#include "graph.h"

int main()
{
    struct graph* g;
    g = graph_create(V);
    for (int i = 0; i < V; i++) {
        printf("%d.%s: ", i + 1, g->name[i]);
        for (int j = 0; j < V; j++) {
            printf("%d ", g->mat[i][j]);
        }
        printf("\n");
    }
    graph_set(g);
    for (int i = 0; i < V; i++) {
        printf("%d.%s: ", i + 1, g->name[i]);
        for (int j = 0; j < V; j++) {
            printf("%d ", g->mat[i][j]);
        }
        printf("\n");
    }
    graph_free(g);
    printf("%d\n", g->nversh);
    for (int i = 0; i < V; i++) {
        printf("%d.%s: ", i + 1, g->name[i]);
        for (int j = 0; j < V; j++) {
            printf("%d ", g->mat[i][j]);
        }
        printf("\n");
    }
}