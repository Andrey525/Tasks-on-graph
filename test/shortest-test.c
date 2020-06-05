#define CTEST_MAIN

#include "ctest.h"
#include "main.h"

CTEST(shortest_way, find_shortest_way_0_1)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 0, end = 1, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_shortest_way(g, ways, way, end);
    //Then
    const int expected = 598;
    ASSERT_EQUAL(expected, result);
}

CTEST(shortest_way, find_shortest_way_0_2)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 0, end = 2, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_shortest_way(g, ways, way, end);
    //Then
    const int expected = 265;
    ASSERT_EQUAL(expected, result);
}

CTEST(shortest_way, find_shortest_way_0_3)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 0, end = 3, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_shortest_way(g, ways, way, end);
    //Then
    const int expected = 266;
    ASSERT_EQUAL(expected, result);
}

CTEST(shortest_way, find_shortest_way_0_4)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 0, end = 4, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_shortest_way(g, ways, way, end);
    //Then
    const int expected = 233;
    ASSERT_EQUAL(expected, result);
}

CTEST(shortest_way, find_shortest_way_0_5)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 0, end = 5, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_shortest_way(g, ways, way, end);
    //Then
    const int expected = 765;
    ASSERT_EQUAL(expected, result);
}

CTEST(shortest_way, find_shortest_way_1_2)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 1, end = 2, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_shortest_way(g, ways, way, end);
    //Then
    const int expected = 545;
    ASSERT_EQUAL(expected, result);
}

CTEST(shortest_way, find_shortest_way_1_3)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 1, end = 3, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_shortest_way(g, ways, way, end);
    //Then
    const int expected = 332;
    ASSERT_EQUAL(expected, result);
}

CTEST(shortest_way, find_shortest_way_1_4)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 1, end = 4, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_shortest_way(g, ways, way, end);
    //Then
    const int expected = 790;
    ASSERT_EQUAL(expected, result);
}

CTEST(shortest_way, find_shortest_way_1_5)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 1, end = 5, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_shortest_way(g, ways, way, end);
    //Then
    const int expected = 1045;
    ASSERT_EQUAL(expected, result);
}

CTEST(shortest_way, find_shortest_way_2_3)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 2, end = 3, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_shortest_way(g, ways, way, end);
    //Then
    const int expected = 213;
    ASSERT_EQUAL(expected, result);
}

CTEST(shortest_way, find_shortest_way_2_4)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 2, end = 4, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_shortest_way(g, ways, way, end);
    //Then
    const int expected = 295;
    ASSERT_EQUAL(expected, result);
}

CTEST(shortest_way, find_shortest_way_2_5)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 2, end = 5, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_shortest_way(g, ways, way, end);
    //Then
    const int expected = 500;
    ASSERT_EQUAL(expected, result);
}

CTEST(shortest_way, find_shortest_way_3_4)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 3, end = 4, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_shortest_way(g, ways, way, end);
    //Then
    const int expected = 458;
    ASSERT_EQUAL(expected, result);
}

CTEST(shortest_way, find_shortest_way_3_5)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 3, end = 5, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_shortest_way(g, ways, way, end);
    //Then
    const int expected = 713;
    ASSERT_EQUAL(expected, result);
}

CTEST(shortest_way, find_shortest_way_4_5)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 4, end = 5, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_shortest_way(g, ways, way, end);
    //Then
    const int expected = 795;
    ASSERT_EQUAL(expected, result);
}

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}