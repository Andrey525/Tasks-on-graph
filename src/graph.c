#include "graph.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Индексы:
                  1   2   3   4   5   6
1 - Новосибирск { 0  638 265 266 233 794}
2 - Омск        {638  0   0  332  0   0 }
3 - Кемерово    {265  0   0  213 295 500}
4 - Томск       {266 332 213  0  458  0 }
5 - Барнаул     {233  0  295 458  0   0 }
6 - Красноярск  {794  0  500  0   0   0 }
*/

void graph_clear(struct graph* g) // Инициализация графа
{
    int i, j;
    for (i = 0; i < g->nversh; i++) {
        for (j = 0; j < g->nversh; j++) {
            g->mat[i][j] = 0;
        }
    }
}
void graph_set(struct graph* g) // Задаем граф
{
    strcpy(g->name[0], "Новосибирск");
    strcpy(g->name[1], "Омск");
    strcpy(g->name[2], "Кемерово");
    strcpy(g->name[3], "Томск");
    strcpy(g->name[4], "Барнаул");
    strcpy(g->name[5], "Красноярск");

    g->mat[0][1] = 638; // Новосибирск --> Омск
    g->mat[1][0] = 638; // Омск --> Новосибирск

    g->mat[0][2] = 265; // Новосибирск --> Кемерово
    g->mat[2][0] = 265; // Кемерово --> Новосибирск

    g->mat[0][3] = 266; // Новосибирск --> Томск
    g->mat[3][0] = 266; // Томск --> Новосибирск

    g->mat[0][4] = 233; // Новосибирск --> Барнаул
    g->mat[4][0] = 233; // Барнаул --> Новосибирск

    g->mat[0][5] = 794; // Новосибирск --> Красноярск
    g->mat[5][0] = 794; // Красноярск --> Новосибирск

    g->mat[1][3] = 332; // Омск --> Томск
    g->mat[3][1] = 332; // Томск --> Омск

    g->mat[2][3] = 213; // Кемерово --> Томск
    g->mat[3][2] = 213; // Томск --> Кемерово

    g->mat[2][4] = 295; // Кемерово --> Барнаул
    g->mat[4][2] = 295; // Барнаул --> Кемерово

    g->mat[2][5] = 500; // Кемерово --> Красноярск
    g->mat[5][2] = 500; // Красноярск --> Кемерово

    g->mat[3][4] = 458; // Томск --> Барнаул
    g->mat[4][3] = 458; // Барнаул --> Томск
}
struct graph* graph_create(unsigned int nversh) // Создание графа
{
    struct graph* g;
    g = malloc(sizeof(*g));
    g->nversh = nversh;
    g->mat = malloc(nversh * nversh * sizeof(unsigned int));
    for (int i = 0; i < nversh; ++i) {
        g->name[i] = malloc(15);
    }
    graph_clear(g);
    return g;
}
void graph_free(struct graph* g) // Удаление графа
{
    free(g->mat);
    for (int i = 0; i < V; ++i) {
        free(g->name[i]);
    }
    free(g);
}
