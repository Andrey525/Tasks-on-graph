#define CTEST_MAIN

#include "ctest.h"
#include "main.h"

CTEST(shortest_way, find_shortest_way_0_1_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 0, end = 1, way = 0;
    int ways[20][V];
    int min = 0, min_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++)
    {
        tryway[i] = 0;
    }

    tryway[0] = 0;
    tryway[1] = 3;
    tryway[2] = 1;

    for (size_t i = 0; i < V; i++)
    {
        realway[i] = 0;
    }
    
    command_for_search(g, start, end, ways, &way);
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

    for (size_t i = 0; i < 3; i++)
    {
        realway[i] = ways[min_id][i];
    }
    //Then
    ASSERT_DATA(realway, 3, tryway, 3);
}

CTEST(shortest_way, find_shortest_way_0_2_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 0, end = 2, way = 0;
    int ways[20][V];
    int min = 0, min_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++)
    {
        tryway[i] = 0;
    }

    tryway[0] = 0;
    tryway[1] = 2;

    for (size_t i = 0; i < V; i++)
    {
        realway[i] = 0;
    }
    
    command_for_search(g, start, end, ways, &way);
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

    for (size_t i = 0; i < 2; i++)
    {
        realway[i] = ways[min_id][i];
    }
    //Then
    ASSERT_DATA(realway, 2, tryway, 2);
}

CTEST(shortest_way, find_shortest_way_0_3_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 0, end = 3, way = 0;
    int ways[20][V];
    int min = 0, min_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++)
    {
        tryway[i] = 0;
    }

    tryway[0] = 0;
    tryway[1] = 3;

    for (size_t i = 0; i < V; i++)
    {
        realway[i] = 0;
    }
    
    command_for_search(g, start, end, ways, &way);
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

    for (size_t i = 0; i < 2; i++)
    {
        realway[i] = ways[min_id][i];
    }
    //Then
    ASSERT_DATA(realway, 2, tryway, 2);
}

CTEST(shortest_way, find_shortest_way_0_4_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 0, end = 4, way = 0;
    int ways[20][V];
    int min = 0, min_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++)
    {
        tryway[i] = 0;
    }

    tryway[0] = 0;
    tryway[1] = 4;

    for (size_t i = 0; i < V; i++)
    {
        realway[i] = 0;
    }
    
    command_for_search(g, start, end, ways, &way);
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

    for (size_t i = 0; i < 2; i++)
    {
        realway[i] = ways[min_id][i];
    }
    //Then
    ASSERT_DATA(realway, 2, tryway, 2);
}

CTEST(shortest_way, find_shortest_way_0_5_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 0, end = 3, way = 0;
    int ways[20][V];
    int min = 0, min_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++)
    {
        tryway[i] = 0;
    }

    tryway[0] = 0;
    tryway[1] = 2;
    tryway[2] = 5;

    for (size_t i = 0; i < V; i++)
    {
        realway[i] = 0;
    }
    
    command_for_search(g, start, end, ways, &way);
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

    for (size_t i = 0; i < 3; i++)
    {
        realway[i] = ways[min_id][i];
    }
    //Then
    ASSERT_DATA(realway, 3, tryway, 3);
}

CTEST(shortest_way, find_shortest_way_1_2_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 1, end = 2, way = 0;
    int ways[20][V];
    int min = 0, min_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++)
    {
        tryway[i] = 0;
    }

    tryway[0] = 1;
    tryway[1] = 3;
    tryway[2] = 2;

    for (size_t i = 0; i < V; i++)
    {
        realway[i] = 0;
    }
    
    command_for_search(g, start, end, ways, &way);
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

    for (size_t i = 0; i < 3; i++)
    {
        realway[i] = ways[min_id][i];
    }
    //Then
    ASSERT_DATA(realway, 3, tryway, 3);
}

CTEST(shortest_way, find_shortest_way_1_3_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 1, end = 3, way = 0;
    int ways[20][V];
    int min = 0, min_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++)
    {
        tryway[i] = 0;
    }

    tryway[0] = 1;
    tryway[1] = 3;

    for (size_t i = 0; i < V; i++)
    {
        realway[i] = 0;
    }
    
    command_for_search(g, start, end, ways, &way);
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

    for (size_t i = 0; i < 2; i++)
    {
        realway[i] = ways[min_id][i];
    }
    //Then
    ASSERT_DATA(realway, 2, tryway, 2);
}

CTEST(shortest_way, find_shortest_way_1_4_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 1, end = 4, way = 0;
    int ways[20][V];
    int min = 0, min_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++)
    {
        tryway[i] = 0;
    }

    tryway[0] = 1;
    tryway[1] = 3;
    tryway[2] = 4;

    for (size_t i = 0; i < V; i++)
    {
        realway[i] = 0;
    }
    
    command_for_search(g, start, end, ways, &way);
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

    for (size_t i = 0; i < 3; i++)
    {
        realway[i] = ways[min_id][i];
    }
    //Then
    ASSERT_DATA(realway, 3, tryway, 3);
}

CTEST(shortest_way, find_shortest_way_1_5_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 1, end = 5, way = 0;
    int ways[20][V];
    int min = 0, min_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++)
    {
        tryway[i] = 0;
    }

    tryway[0] = 1;
    tryway[1] = 3;
    tryway[2] = 2;
    tryway[3] = 5;

    for (size_t i = 0; i < V; i++)
    {
        realway[i] = 0;
    }
    
    command_for_search(g, start, end, ways, &way);
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

    for (size_t i = 0; i < 4; i++)
    {
        realway[i] = ways[min_id][i];
    }
    //Then
    ASSERT_DATA(realway, 4, tryway, 4);
}

CTEST(shortest_way, find_shortest_way_2_3_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 2, end = 3, way = 0;
    int ways[20][V];
    int min = 0, min_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++)
    {
        tryway[i] = 0;
    }

    tryway[0] = 2;
    tryway[1] = 3;

    for (size_t i = 0; i < V; i++)
    {
        realway[i] = 0;
    }
    
    command_for_search(g, start, end, ways, &way);
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

    for (size_t i = 0; i < 2; i++)
    {
        realway[i] = ways[min_id][i];
    }
    //Then
    ASSERT_DATA(realway, 2, tryway, 2);
}

CTEST(shortest_way, find_shortest_way_2_4_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 2, end = 4, way = 0;
    int ways[20][V];
    int min = 0, min_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++)
    {
        tryway[i] = 0;
    }

    tryway[0] = 2;
    tryway[1] = 4;

    for (size_t i = 0; i < V; i++)
    {
        realway[i] = 0;
    }
    
    command_for_search(g, start, end, ways, &way);
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

    for (size_t i = 0; i < 2; i++)
    {
        realway[i] = ways[min_id][i];
    }
    //Then
    ASSERT_DATA(realway, 2, tryway, 2);
}

CTEST(shortest_way, find_shortest_way_2_5_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 2, end = 5, way = 0;
    int ways[20][V];
    int min = 0, min_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++)
    {
        tryway[i] = 0;
    }

    tryway[0] = 2;
    tryway[1] = 5;

    for (size_t i = 0; i < V; i++)
    {
        realway[i] = 0;
    }
    
    command_for_search(g, start, end, ways, &way);
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

    for (size_t i = 0; i < 2; i++)
    {
        realway[i] = ways[min_id][i];
    }
    //Then
    ASSERT_DATA(realway, 2, tryway, 2);
}

CTEST(shortest_way, find_shortest_way_3_4_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 3, end = 4, way = 0;
    int ways[20][V];
    int min = 0, min_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++)
    {
        tryway[i] = 0;
    }

    tryway[0] = 3;
    tryway[1] = 4;

    for (size_t i = 0; i < V; i++)
    {
        realway[i] = 0;
    }
    
    command_for_search(g, start, end, ways, &way);
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

    for (size_t i = 0; i < 2; i++)
    {
        realway[i] = ways[min_id][i];
    }
    //Then
    ASSERT_DATA(realway, 2, tryway, 2);
}

CTEST(shortest_way, find_shortest_way_3_5_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 3, end = 5, way = 0;
    int ways[20][V];
    int min = 0, min_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++)
    {
        tryway[i] = 0;
    }

    tryway[0] = 3;
    tryway[1] = 2;
    tryway[2] = 5;

    for (size_t i = 0; i < V; i++)
    {
        realway[i] = 0;
    }
    
    command_for_search(g, start, end, ways, &way);
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

    for (size_t i = 0; i < 3; i++)
    {
        realway[i] = ways[min_id][i];
    }
    //Then
    ASSERT_DATA(realway, 3, tryway, 3);
}

CTEST(shortest_way, find_shortest_way_4_5_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 4, end = 5, way = 0;
    int ways[20][V];
    int min = 0, min_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++)
    {
        tryway[i] = 0;
    }

    tryway[0] = 4;
    tryway[1] = 2;
    tryway[2] = 5;

    for (size_t i = 0; i < V; i++)
    {
        realway[i] = 0;
    }
    
    command_for_search(g, start, end, ways, &way);
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

    for (size_t i = 0; i < 3; i++)
    {
        realway[i] = ways[min_id][i];
    }
    //Then
    ASSERT_DATA(realway, 3, tryway, 3);
}

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}