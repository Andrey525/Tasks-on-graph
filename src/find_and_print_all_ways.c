#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// DELETE
#define V 6

struct graph {
    unsigned int nversh; // Число вершин
    unsigned int (*mat)[V]; // Матрица n x n
    char* name[V];
};

void graph_clear(struct graph* g);
void graph_set(struct graph* g);
struct graph* graph_create(unsigned int nversh);
void graph_free(struct graph* g);
void print_shortest_way(struct graph* g, int ways[10][10], int way, int end);

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
    struct graph* g = malloc(sizeof(*g));
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
int check_for_exist(char* arg, struct graph* g)
{
    for (int i = 0; i < V; i++) {
        if (!strcmp(g->name[i], arg)) {
            return i;
        }
    }
    return -1;
}
// DELETE

struct Tree {
    struct Tree* child[V];
    int parents[V];
    int name;
    int stat;
};

void init_node(struct Tree* tree, int name, int parents[])
{
    tree->name = name;
    for (int i = 0; i < V; i++) {
        tree->child[i] = calloc(sizeof(tree->child[i]), 1);
        tree->child[i]->stat = -1;
    }
    for (int i = 0; i < V; i++) {
        tree->parents[i] = parents[i];
    }
}
int chek(int mass[], int a)
{
    for (int i = 0; i < V; i++) {
        if (mass[i] == a) {
            return -1;
        }
        if (mass[i] == -1) {
            return i;
        }
    }
    return -2;
}
void find_num_of_ways(struct graph* g, struct Tree* tree, int parents[], int start, int end, int ways[10][10], int* way)
{
    if (tree->name != end) {
        for (int i = 0, j = 0; i < V; i++) {
            int name_id = check_for_exist(g->name[i], g);
            if (g->mat[start][i] && chek(parents, name_id) > -1) {
                if (tree->parents[chek(parents, name_id) - 1] == start) {
                    tree->parents[chek(parents, name_id) - 1] = start;
                } else {
                    tree->parents[chek(parents, name_id)] = start;
                }
                init_node(tree->child[j], name_id, tree->parents);
                tree->child[j]->stat = 1;
                find_num_of_ways(g, tree->child[j], tree->parents, name_id, end, ways, way);
                j++;
            }
        }
    } else {
        for (int i = 0; i < V; ++i) {
            if (tree->parents[i] == -1) {
                tree->parents[i] = end;
                break;
            }
        }
        int i;
        for (i = 0; tree->parents[i] != end; i++) {
            ways[*way][i] = tree->parents[i];
        }
        ways[*way][i] = tree->parents[i];
        *way += 1;
    }
}
void print_all_ways(struct graph* g, int ways[10][10], int way, int end)
{
    for (int i = 0; i < way; i++) {
        int dist = 0;
        for (int j = 0; ways[i][j] != end; j++) {
            printf("%s", g->name[ways[i][j]]);
            printf(" --(%d)-->", g->mat[ways[i][j]][ways[i][j + 1]]);
            dist += g->mat[ways[i][j]][ways[i][j + 1]];
        }
        printf("%s, Длина пути = %d\n", g->name[end], dist);
    }
}

void command_for_search_shortest_ways(int start, int end)
{
    struct graph* g = graph_create(V);
    graph_set(g);
    struct Tree* Cor = malloc(sizeof(*Cor));

    int way = 0;
    int ways[10][10];

    for (int i = 0; i < V; i++) {
        Cor->parents[i] = -1;
    }

    init_node(Cor, start, Cor->parents);
    Cor->parents[0] = start;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            ways[i][j] = 0;
        }
    }
    Cor->stat = 1;
    find_num_of_ways(g, Cor, Cor->parents, start, end, ways, &way);
    print_shortest_way(g, ways, way, end);
}

void print_longest_way(struct graph* g, int ways[10][10], int way, int end)
{
    int max = -1, max_id = 0;
    for (int i = 0; i < way; i++) {
        int dist = 0;
        for (int j = 0; ways[i][j] != end; j++) {
            dist += g->mat[ways[i][j]][ways[i][j + 1]];
        }
        if (max < dist) {
            max_id = i;
            max = dist;
        }
    }
    printf("Длиннейший маршрут %s ----> %s:\n", g->name[ways[max_id][0]], g->name[end]);
    for (int i = 0; ways[max_id][i] != end; i++) {
        printf("%s", g->name[ways[max_id][i]]);
        printf(" --(%d)--> ", g->mat[ways[max_id][i]][ways[max_id][i + 1]]);
    }
    printf("%s", g->name[end]);
    printf(", Длина маршрута = %d км\n", max);
}

void command_for_search_longest_way(int start, int end)
{
    struct graph* g = graph_create(V);
    graph_set(g);
    struct Tree* Cor = malloc(sizeof(*Cor));

    int way = 0;
    int ways[10][10];

    for (int i = 0; i < V; i++) {
        Cor->parents[i] = -1;
    }

    init_node(Cor, start, Cor->parents);
    Cor->parents[0] = start;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            ways[i][j] = 0;
        }
    }
    Cor->stat = 1;
    find_num_of_ways(g, Cor, Cor->parents, start, end, ways, &way);
    print_longest_way(g, ways, way, end);
}

void command_for_search_all_ways(int start, int end)
{
    struct graph* g = graph_create(V);
    graph_set(g);
    struct Tree* Cor = malloc(sizeof(*Cor));

    int way = 0;
    int ways[10][10];

    for (int i = 0; i < V; i++) {
        Cor->parents[i] = -1;
    }

    init_node(Cor, start, Cor->parents);
    Cor->parents[0] = start;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            ways[i][j] = 0;
        }
    }
    Cor->stat = 1;
    find_num_of_ways(g, Cor, Cor->parents, start, end, ways, &way);
    print_all_ways(g, ways, way, end);
}

void print_shortest_way(struct graph* g, int ways[10][10], int way, int end)
{
    int min = 10000000;
    int min_id = 0;

    for (size_t i = 0; i < way; i++) {
        int dist = 0;
        for (size_t j = 0; ways[i][j] != end; j++) {
            dist += g->mat[ways[i][j]][ways[i][j + 1]];
        }

        if (min > dist) {
            min_id = i;
            min = dist;
        }
    }
    printf("Кратчайший маршрут %s ----> %s\n", g->name[ways[min_id][0]], g->name[end]);
    for (int j = 0; ways[min_id][j] != end; j++) {
        printf("%s", g->name[ways[min_id][j]]);
        printf(" --(%d)--> ", g->mat[ways[min_id][j]][ways[min_id][j + 1]]);
    }
    printf("%s", g->name[end]);
    printf(", Длина маршрута = %d км\n", min);
}

int main()
{
    int start = 0, end = 1;
    command_for_search_all_ways(start, end);
    printf("\n");
    start = 1, end = 0;
    command_for_search_all_ways(start, end);

    printf("\n\n\n");
    command_for_search_shortest_ways(start, end);

    printf("\n");
    start = 0, end = 1;
    command_for_search_longest_way(start, end);
    printf("\n");
    start = 1, end = 0;
    command_for_search_longest_way(start, end);

}