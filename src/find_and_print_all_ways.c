#include "main.h"

int check_for_exist(char* arg, char* name[V])
{
    for (int i = 0; i < V; i++) {
        if (!strcmp(name[i], arg)) {
            return i;
        }
    }
    return -1;
}
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
void find_num_of_ways(
        struct graph* g,
        struct Tree* tree,
        int parents[],
        int start,
        int end,
        int (*ways)[V],
        int* way)
{
    if (tree->name != end) {
        for (int i = 0, j = 0; i < V; i++) {
            int name_id = check_for_exist(g->name[i], g->name);
            if (g->mat[start][i] && chek(parents, name_id) > -1) {
                if (tree->parents[chek(parents, name_id) - 1] == start) {
                    tree->parents[chek(parents, name_id) - 1] = start;
                } else {
                    tree->parents[chek(parents, name_id)] = start;
                }
                init_node(tree->child[j], name_id, tree->parents);
                tree->child[j]->stat = 1;
                find_num_of_ways(
                        g,
                        tree->child[j],
                        tree->parents,
                        name_id,
                        end,
                        ways,
                        way);
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
void print_all_ways(struct graph* g, int (*ways)[V], int way, int end)
{
    printf("%s ----> %s, Количество маршрутов %d\n",
           g->name[ways[0][0]],
           g->name[end],
           way);
    for (int i = 0; i < way; i++) {
        int dist = 0;
        for (int j = 0; ways[i][j] != end; j++) {
            printf("%s", g->name[ways[i][j]]);
            printf(" --(%d)--> ", g->mat[ways[i][j]][ways[i][j + 1]]);
            dist += g->mat[ways[i][j]][ways[i][j + 1]];
        }
        printf("%s, Длина маршрута = %d\n", g->name[end], dist);
    }
}
int print_longest_way(struct graph* g, int (*ways)[V], int way, int end)
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
    printf("Длиннейший маршрут %s ----> %s:\n",
           g->name[ways[max_id][0]],
           g->name[end]);
    for (int i = 0; ways[max_id][i] != end; i++) {
        printf("%s", g->name[ways[max_id][i]]);
        printf(" --(%d)--> ", g->mat[ways[max_id][i]][ways[max_id][i + 1]]);
    }
    printf("%s", g->name[end]);
    printf(", Длина маршрута = %d км\n", max);
    return max;
}
int print_shortest_way(struct graph* g, int (*ways)[V], int way, int end)
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
    printf("Кратчайший маршрут %s ----> %s\n",
           g->name[ways[min_id][0]],
           g->name[end]);
    for (int j = 0; ways[min_id][j] != end; j++) {
        printf("%s", g->name[ways[min_id][j]]);
        printf(" --(%d)--> ", g->mat[ways[min_id][j]][ways[min_id][j + 1]]);
    }
    printf("%s", g->name[end]);
    printf(", Длина маршрута = %d км\n", min);
    return min;
}
void mat_to_zero(int (*mat)[V], int n, int k)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            mat[i][j] = 0;
        }
    }
}
void command_for_search(
        struct graph* g, int start, int end, int (*ways)[V], int* way)
{
    struct Tree* Cor = malloc(sizeof(*Cor));

    for (int i = 0; i < V; i++) {
        Cor->parents[i] = -1;
    }

    init_node(Cor, start, Cor->parents);
    Cor->parents[0] = start;
    mat_to_zero(ways, 20, V);

    Cor->stat = 1;
    find_num_of_ways(g, Cor, Cor->parents, start, end, ways, way);
}
void sort_ways(int (*ways)[V], int way, int end)
{
    int temp[way];
    int tmp;
    for (int j = 0; j < way; j++) {
        temp[j] = 0;
    }
    for (int i = 0; i < way; i++) {
        for (int j = 0; ways[i][j] != end; j++) {
            temp[i] += 1;
        }
        temp[i] += 1;
    }
    for (int i = 0; i < way; i++) {
        for (int j = 0; j < way; j++) {
            if (temp[i] < temp[j]) {
                for (int k = 0; k < V; k++) {
                    tmp = ways[i][k];
                    ways[i][k] = ways[j][k];
                    ways[j][k] = tmp;
                }
                tmp = temp[i];
                temp[i] = temp[j];
                temp[j] = tmp;
            }
        }
    }
}
// int main()
// {
//     struct graph* g = graph_create(V);
//     graph_set(g);
//     int start = 1, end = 5, way = 0;
//     int ways[20][V];
//     command_for_search(g, start, end, ways, &way);
//     sort_ways(ways, way, end);
//     print_all_ways(g, ways, way, end);
//     printf("\n");
//     print_longest_way(g, ways, way, end);
//     printf("\n");
//     print_shortest_way(g, ways, way, end);
// }