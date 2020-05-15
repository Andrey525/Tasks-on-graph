#ifndef GRAPH
#define GRAPH
#define MAX 100000
#define V 6

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct graph {
    unsigned int nversh; // Число вершин
    unsigned int (*mat)[V]; // Матрица n x n
    char* name[V];
};

void graph_clear(struct graph* g);
void graph_set(struct graph* g);
struct graph* graph_create(unsigned int nversh);
void graph_free(struct graph* g);
#endif