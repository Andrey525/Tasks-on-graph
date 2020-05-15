#include "graph.h"
#include <stdio.h>

int main()
{
    struct graph* g;
    g = graph_create(6);
    graph_set(g);
    unsigned int w;

    printf("\n\n");
    printf("Вывод ребер и их длин:\n\n");
    for (int i = 1; i <= g->nversh; i++) {
        for (int j = 1; j <= g->nversh; j++) {
            w = graph_get_edge(g, i, j);
            printf("Rebro %d-->%d = %d\n", i, j, w);
        }
    }

    printf("\n\n");
    printf("Вывод путей между соседними городами:\n\n");
    for (int i = 1; i <= g->nversh; i++) {
        for (int j = 1; j <= g->nversh; j++) {
            w = graph_get_edge(g, i, j);
            if (w == 0) {
                continue;
            }
            printf("%s-->%s = %d\n", g->name[i], g->name[j], w);
        }
    }

    printf("\n\n");
    printf("Вывод информации в виде матрицы:\n");
    for (int i = 1; i <= g->nversh; i++) {
        printf("\n%s\t", g->name[i]);
        if (i == 2 || i == 4 || i == 5) {
            printf("\t");
        }
        for (int j = 1; j <= g->nversh; j++) {
            w = graph_get_edge(g, i, j);
            printf("%3d\t", w);
        }
    }

    printf("\n\n");
    //for (int i = 1; i <= g->nversh; i++) {
    //    printf("Visited: %d\n", g->visited[i]);
    //}

    //graph_free(g);
    return 0;
}
