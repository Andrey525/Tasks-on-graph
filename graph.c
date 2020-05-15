#include "graph.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Индексы:
				  1   2   3   4   5   6
1 - Новосибирск { 0	 638 265 266 233 794}
2 - Омск		{638  0	  0  332  0   0 }
3 - Кемерово	{265  0   0  213 295 500}
4 - Томск		{266 332 213  0  458  0 }
5 - Барнаул		{233  0  295 458  0   0 }
6 - Красноярск  {794  0  500  0   0   0 }

g->mat[(i - 1) * g->nversh + j - 1] = weight; //// i - индекс откуда, j - индекс куда, weight - длина пути.
*/

void graph_clear(struct graph* g) // Инициализация графа
{
    int i, j;
    for (i = 1; i <= g->nversh; i++) {
        g->visited[i] = 0;
        for (j = 1; j <= g->nversh; j++) {
            g->mat[i * g->nversh + j] = 0;
        }
    }
}

void graph_set(struct graph* g) // Задаем граф
{

    strcpy(g->name[1], "Новосибирск");
    strcpy(g->name[2], "Омск");
    strcpy(g->name[3], "Кемерово");
    strcpy(g->name[4], "Томск");
    strcpy(g->name[5], "Барнаул");
    strcpy(g->name[6], "Красноярск");

    g->mat[(1 - 1) * g->nversh + 2 - 1] = 638; // Новосибирск --> Омск
    g->mat[(2 - 1) * g->nversh + 1 - 1] = 638; // Омск --> Новосибирск

    g->mat[(1 - 1) * g->nversh + 3 - 1] = 265; // Новосибирск --> Кемерово
    g->mat[(3 - 1) * g->nversh + 1 - 1] = 265; // Кемерово --> Новосибирск

    g->mat[(1 - 1) * g->nversh + 4 - 1] = 266; // Новосибирск --> Томск
    g->mat[(4 - 1) * g->nversh + 1 - 1] = 266; // Томск --> Новосибирск

    g->mat[(1 - 1) * g->nversh + 5 - 1] = 233; // Новосибирск --> Барнаул
    g->mat[(5 - 1) * g->nversh + 1 - 1] = 233; // Барнаул --> Новосибирск

    g->mat[(1 - 1) * g->nversh + 6 - 1] = 794; // Новосибирск --> Красноярск
    g->mat[(6 - 1) * g->nversh + 1 - 1] = 794; // Красноярск --> Новосибирск

    g->mat[(2 - 1) * g->nversh + 4 - 1] = 332; // Омск --> Томск
    g->mat[(4 - 1) * g->nversh + 2 - 1] = 332; // Томск --> Омск

    g->mat[(3 - 1) * g->nversh + 4 - 1] = 213; // Кемерово --> Томск
    g->mat[(4 - 1) * g->nversh + 3 - 1] = 213; // Томск --> Кемерово

    g->mat[(3 - 1) * g->nversh + 5 - 1] = 295; // Кемерово --> Барнаул
    g->mat[(5 - 1) * g->nversh + 3 - 1] = 295; // Барнаул --> Кемерово

    g->mat[(3 - 1) * g->nversh + 6 - 1] = 500; // Кемерово --> Красноярск
    g->mat[(6 - 1) * g->nversh + 3 - 1] = 500; // Красноярск --> Кемерово

    g->mat[(4 - 1) * g->nversh + 5 - 1] = 458; // Томск --> Барнаул
    g->mat[(5 - 1) * g->nversh + 4 - 1] = 458; // Барнаул --> Томск
}

struct graph* graph_create(unsigned int nversh) // Создание графа
{
    struct graph* g;
    g = malloc(sizeof(*g));
    g->nversh = nversh;
    g->mat = malloc(nversh * nversh * sizeof(unsigned int));
    g->visited = malloc(nversh * sizeof(unsigned int));
    for (int i = 1; i <= nversh; ++i) {
        g->name[i] = malloc(15);
    }
    graph_clear(g);
    return g;
}

void graph_free(struct graph* g) // Удаление графа
{
    free(g->mat);
    free(g->visited);
    for (int i = 1; i <= 5; ++i) {
        free(g->name[i]);
    }
    free(g);
}

void graph_set_edge(struct graph* g, int i, int j, unsigned int weight) // Назначение веса ребру графа
{
    g->mat[(i - 1) * g->nversh + j - 1] = weight;
    g->mat[(j - 1) * g->nversh + i - 1] = weight;
}

int graph_get_edge(struct graph* g, int i, int j) // Получение веса ребра
{
    return g->mat[(i - 1) * g->nversh + j - 1];
} 
