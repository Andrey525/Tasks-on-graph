#define CTEST_MAIN

#include "ctest.h"
#include "main.h"

CTEST(longest_way, find_longest_way_0_1_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 0, end = 1, way = 0;
    int ways[20][V];
    int max = 0, max_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++) {
        tryway[i] = 0;
    }

    tryway[0] = 0;
    tryway[1] = 5;
    tryway[2] = 2;
    tryway[3] = 4;
    tryway[4] = 3;
    tryway[5] = 1;

    for (size_t i = 0; i < V; i++) {
        realway[i] = 0;
    }

    command_for_search(g, start, end, ways, &way);
    for (size_t i = 0; i < way; i++) {
        int dist = 0;
        for (size_t j = 0; ways[i][j] != end; j++) {
            dist += g->mat[ways[i][j]][ways[i][j + 1]];
        }

        if (max < dist) {
            max_id = i;
            max = dist;
        }
    }

    for (size_t i = 0; i < 6; i++) {
        realway[i] = ways[max_id][i];
    }
    //Then
    ASSERT_DATA(realway, 6, tryway, 6);
}

CTEST(longest_way, find_longest_way_0_2_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 0, end = 2, way = 0;
    int ways[20][V];
    int max = 0, max_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++) {
        tryway[i] = 0;
    }

    tryway[0] = 0;
    tryway[1] = 1;
    tryway[2] = 3;
    tryway[3] = 4;
    tryway[4] = 2;

    for (size_t i = 0; i < V; i++) {
        realway[i] = 0;
    }

    command_for_search(g, start, end, ways, &way);
    for (size_t i = 0; i < way; i++) {
        int dist = 0;
        for (size_t j = 0; ways[i][j] != end; j++) {
            dist += g->mat[ways[i][j]][ways[i][j + 1]];
        }

        if (max < dist) {
            max_id = i;
            max = dist;
        }
    }

    for (size_t i = 0; i < 5; i++) {
        realway[i] = ways[max_id][i];
    }
    //Then
    ASSERT_DATA(realway, 5, tryway, 5);
}

CTEST(longest_way, find_longest_way_0_3_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 0, end = 3, way = 0;
    int ways[20][V];
    int max = 0, max_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++) {
        tryway[i] = 0;
    }

    tryway[0] = 0;
    tryway[1] = 5;
    tryway[2] = 2;
    tryway[3] = 4;
    tryway[4] = 3;

    for (size_t i = 0; i < V; i++) {
        realway[i] = 0;
    }

    command_for_search(g, start, end, ways, &way);
    for (size_t i = 0; i < way; i++) {
        int dist = 0;
        for (size_t j = 0; ways[i][j] != end; j++) {
            dist += g->mat[ways[i][j]][ways[i][j + 1]];
        }

        if (max < dist) {
            max_id = i;
            max = dist;
        }
    }

    for (size_t i = 0; i < 5; i++) {
        realway[i] = ways[max_id][i];
    }
    //Then
    ASSERT_DATA(realway, 5, tryway, 5);
}

CTEST(longest_way, find_longest_way_0_4_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 0, end = 4, way = 0;
    int ways[20][V];
    int max = 0, max_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++) {
        tryway[i] = 0;
    }

    tryway[0] = 0;
    tryway[1] = 5;
    tryway[2] = 2;
    tryway[3] = 3;
    tryway[4] = 4;

    for (size_t i = 0; i < V; i++) {
        realway[i] = 0;
    }

    command_for_search(g, start, end, ways, &way);
    for (size_t i = 0; i < way; i++) {
        int dist = 0;
        for (size_t j = 0; ways[i][j] != end; j++) {
            dist += g->mat[ways[i][j]][ways[i][j + 1]];
        }

        if (max < dist) {
            max_id = i;
            max = dist;
        }
    }

    for (size_t i = 0; i < 5; i++) {
        realway[i] = ways[max_id][i];
    }
    //Then
    ASSERT_DATA(realway, 5, tryway, 5);
}

CTEST(longest_way, find_longest_way_0_5_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 0, end = 5, way = 0;
    int ways[20][V];
    int max = 0, max_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++) {
        tryway[i] = 0;
    }

    tryway[0] = 0;
    tryway[1] = 1;
    tryway[2] = 3;
    tryway[3] = 4;
    tryway[4] = 1;
    tryway[5] = 5;

    for (size_t i = 0; i < V; i++) {
        realway[i] = 0;
    }

    command_for_search(g, start, end, ways, &way);
    for (size_t i = 0; i < way; i++) {
        int dist = 0;
        for (size_t j = 0; ways[i][j] != end; j++) {
            dist += g->mat[ways[i][j]][ways[i][j + 1]];
        }

        if (max < dist) {
            max_id = i;
            max = dist;
        }
    }

    for (size_t i = 0; i < 6; i++) {
        realway[i] = ways[max_id][i];
    }
    //Then
    ASSERT_DATA(realway, 6, tryway, 6);
}

CTEST(longest_way, find_longest_way_1_2_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 1, end = 2, way = 0;
    int ways[20][V];
    int max = 0, max_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++) {
        tryway[i] = 0;
    }

    tryway[0] = 1;
    tryway[1] = 3;
    tryway[2] = 4;
    tryway[3] = 0;
    tryway[4] = 5;
    tryway[5] = 2;

    for (size_t i = 0; i < V; i++) {
        realway[i] = 0;
    }

    command_for_search(g, start, end, ways, &way);
    for (size_t i = 0; i < way; i++) {
        int dist = 0;
        for (size_t j = 0; ways[i][j] != end; j++) {
            dist += g->mat[ways[i][j]][ways[i][j + 1]];
        }

        if (max < dist) {
            max_id = i;
            max = dist;
        }
    }

    for (size_t i = 0; i < 6; i++) {
        realway[i] = ways[max_id][i];
    }
    //Then
    ASSERT_DATA(realway, 6, tryway, 6);
}

CTEST(longest_way, find_longest_way_1_3_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 1, end = 3, way = 0;
    int ways[20][V];
    int max = 0, max_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++) {
        tryway[i] = 0;
    }

    tryway[0] = 1;
    tryway[1] = 0;
    tryway[2] = 5;
    tryway[3] = 2;
    tryway[4] = 4;
    tryway[5] = 3;

    for (size_t i = 0; i < V; i++) {
        realway[i] = 0;
    }

    command_for_search(g, start, end, ways, &way);
    for (size_t i = 0; i < way; i++) {
        int dist = 0;
        for (size_t j = 0; ways[i][j] != end; j++) {
            dist += g->mat[ways[i][j]][ways[i][j + 1]];
        }

        if (max < dist) {
            max_id = i;
            max = dist;
        }
    }

    for (size_t i = 0; i < 6; i++) {
        realway[i] = ways[max_id][i];
    }
    //Then
    ASSERT_DATA(realway, 6, tryway, 6);
}

CTEST(longest_way, find_longest_way_1_4_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 1, end = 4, way = 0;
    int ways[20][V];
    int max = 0, max_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++) {
        tryway[i] = 0;
    }

    tryway[0] = 1;
    tryway[1] = 0;
    tryway[2] = 5;
    tryway[3] = 2;
    tryway[4] = 3;
    tryway[5] = 4;

    for (size_t i = 0; i < V; i++) {
        realway[i] = 0;
    }

    command_for_search(g, start, end, ways, &way);
    for (size_t i = 0; i < way; i++) {
        int dist = 0;
        for (size_t j = 0; ways[i][j] != end; j++) {
            dist += g->mat[ways[i][j]][ways[i][j + 1]];
        }

        if (max < dist) {
            max_id = i;
            max = dist;
        }
    }

    for (size_t i = 0; i < 6; i++) {
        realway[i] = ways[max_id][i];
    }
    //Then
    ASSERT_DATA(realway, 6, tryway, 6);
}

CTEST(longest_way, find_longest_way_1_5_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 1, end = 5, way = 0;
    int ways[20][V];
    int max = 0, max_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++) {
        tryway[i] = 0;
    }

    tryway[0] = 1;
    tryway[1] = 0;
    tryway[2] = 3;
    tryway[3] = 4;
    tryway[4] = 2;
    tryway[5] = 5;

    for (size_t i = 0; i < V; i++) {
        realway[i] = 0;
    }

    command_for_search(g, start, end, ways, &way);
    for (size_t i = 0; i < way; i++) {
        int dist = 0;
        for (size_t j = 0; ways[i][j] != end; j++) {
            dist += g->mat[ways[i][j]][ways[i][j + 1]];
        }

        if (max < dist) {
            max_id = i;
            max = dist;
        }
    }

    for (size_t i = 0; i < 6; i++) {
        realway[i] = ways[max_id][i];
    }
    //Then
    ASSERT_DATA(realway, 6, tryway, 6);
}

CTEST(longest_way, find_longest_way_2_3_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 2, end = 3, way = 0;
    int ways[20][V];
    int max = 0, max_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++) {
        tryway[i] = 0;
    }

    tryway[0] = 2;
    tryway[1] = 5;
    tryway[2] = 0;
    tryway[3] = 1;
    tryway[4] = 3;

    for (size_t i = 0; i < V; i++) {
        realway[i] = 0;
    }

    command_for_search(g, start, end, ways, &way);
    for (size_t i = 0; i < way; i++) {
        int dist = 0;
        for (size_t j = 0; ways[i][j] != end; j++) {
            dist += g->mat[ways[i][j]][ways[i][j + 1]];
        }

        if (max < dist) {
            max_id = i;
            max = dist;
        }
    }

    for (size_t i = 0; i < 5; i++) {
        realway[i] = ways[max_id][i];
    }
    //Then
    ASSERT_DATA(realway, 5, tryway, 5);
}

CTEST(longest_way, find_longest_way_2_4_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 2, end = 4, way = 0;
    int ways[20][V];
    int max = 0, max_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++) {
        tryway[i] = 0;
    }

    tryway[0] = 2;
    tryway[1] = 5;
    tryway[2] = 0;
    tryway[3] = 1;
    tryway[4] = 3;
    tryway[5] = 4;

    for (size_t i = 0; i < V; i++) {
        realway[i] = 0;
    }

    command_for_search(g, start, end, ways, &way);
    for (size_t i = 0; i < way; i++) {
        int dist = 0;
        for (size_t j = 0; ways[i][j] != end; j++) {
            dist += g->mat[ways[i][j]][ways[i][j + 1]];
        }

        if (max < dist) {
            max_id = i;
            max = dist;
        }
    }

    for (size_t i = 0; i < 6; i++) {
        realway[i] = ways[max_id][i];
    }
    //Then
    ASSERT_DATA(realway, 6, tryway, 6);
}

CTEST(longest_way, find_longest_way_2_5_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 2, end = 5, way = 0;
    int ways[20][V];
    int max = 0, max_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++) {
        tryway[i] = 0;
    }

    tryway[0] = 2;
    tryway[1] = 4;
    tryway[2] = 3;
    tryway[3] = 1;
    tryway[4] = 0;
    tryway[5] = 5;

    for (size_t i = 0; i < V; i++) {
        realway[i] = 0;
    }

    command_for_search(g, start, end, ways, &way);
    for (size_t i = 0; i < way; i++) {
        int dist = 0;
        for (size_t j = 0; ways[i][j] != end; j++) {
            dist += g->mat[ways[i][j]][ways[i][j + 1]];
        }

        if (max < dist) {
            max_id = i;
            max = dist;
        }
    }

    for (size_t i = 0; i < 6; i++) {
        realway[i] = ways[max_id][i];
    }
    //Then
    ASSERT_DATA(realway, 6, tryway, 6);
}

CTEST(longest_way, find_longest_way_3_4_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 3, end = 4, way = 0;
    int ways[20][V];
    int max = 0, max_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++) {
        tryway[i] = 0;
    }

    tryway[0] = 3;
    tryway[1] = 1;
    tryway[2] = 0;
    tryway[3] = 5;
    tryway[4] = 2;
    tryway[5] = 4;

    for (size_t i = 0; i < V; i++) {
        realway[i] = 0;
    }

    command_for_search(g, start, end, ways, &way);
    for (size_t i = 0; i < way; i++) {
        int dist = 0;
        for (size_t j = 0; ways[i][j] != end; j++) {
            dist += g->mat[ways[i][j]][ways[i][j + 1]];
        }

        if (max < dist) {
            max_id = i;
            max = dist;
        }
    }

    for (size_t i = 0; i < 6; i++) {
        realway[i] = ways[max_id][i];
    }
    //Then
    ASSERT_DATA(realway, 6, tryway, 6);
}

CTEST(longest_way, find_longest_way_3_5_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 3, end = 5, way = 0;
    int ways[20][V];
    int max = 0, max_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++) {
        tryway[i] = 0;
    }

    tryway[0] = 3;
    tryway[1] = 1;
    tryway[2] = 0;
    tryway[3] = 4;
    tryway[4] = 2;
    tryway[5] = 5;

    for (size_t i = 0; i < V; i++) {
        realway[i] = 0;
    }

    command_for_search(g, start, end, ways, &way);
    for (size_t i = 0; i < way; i++) {
        int dist = 0;
        for (size_t j = 0; ways[i][j] != end; j++) {
            dist += g->mat[ways[i][j]][ways[i][j + 1]];
        }

        if (max < dist) {
            max_id = i;
            max = dist;
        }
    }

    for (size_t i = 0; i < 6; i++) {
        realway[i] = ways[max_id][i];
    }
    //Then
    ASSERT_DATA(realway, 6, tryway, 6);
}

CTEST(longest_way, find_longest_way_4_5_route)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 4, end = 5, way = 0;
    int ways[20][V];
    int max = 0, max_id = 0;
    int tryway[V];
    int realway[V];
    //When
    for (size_t i = 0; i < V; i++) {
        tryway[i] = 0;
    }

    tryway[0] = 4;
    tryway[1] = 2;
    tryway[2] = 3;
    tryway[3] = 1;
    tryway[4] = 0;
    tryway[5] = 5;

    for (size_t i = 0; i < V; i++) {
        realway[i] = 0;
    }

    command_for_search(g, start, end, ways, &way);
    for (size_t i = 0; i < way; i++) {
        int dist = 0;
        for (size_t j = 0; ways[i][j] != end; j++) {
            dist += g->mat[ways[i][j]][ways[i][j + 1]];
        }

        if (max < dist) {
            max_id = i;
            max = dist;
        }
    }

    for (size_t i = 0; i < 6; i++) {
        realway[i] = ways[max_id][i];
    }
    //Then
    ASSERT_DATA(realway, 6, tryway, 6);
}

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}
