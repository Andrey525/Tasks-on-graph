struct graph {
    unsigned int nversh; // Число вершин
    unsigned int* mat; // Матрица n x n
    unsigned int* visited;
    char* name[10];
};

void graph_clear(struct graph* g);
void graph_set(struct graph* g);
struct graph* graph_create(unsigned int nversh);
void graph_free(struct graph* g);
void graph_set_edge(struct graph* g, int i, int j, unsigned int weight);
int graph_get_edge(struct graph* g, int i, int j);
