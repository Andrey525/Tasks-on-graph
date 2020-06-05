#define CTEST_MAIN

#include "ctest.h"
#include "main.h"

CTEST(longest_way, find_longest_way_0_1)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 0, end = 1, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_longest_way(g, ways, way, end);
    //Then
    const int expected = 2379;
    ASSERT_EQUAL(expected, result);
}

CTEST(longest_way, find_longest_way_0_2)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 0, end = 2, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_longest_way(g, ways, way, end);
    //Then
    const int expected = 1723;
    ASSERT_EQUAL(expected, result);
}

CTEST(longest_way, find_longest_way_0_3)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 0, end = 3, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_longest_way(g, ways, way, end);
    //Then
    const int expected = 2047;
    ASSERT_EQUAL(expected, result);
}

CTEST(longest_way, find_longest_way_0_4)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 0, end = 4, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_longest_way(g, ways, way, end);
    //Then
    const int expected = 1965;
    ASSERT_EQUAL(expected, result);
}

CTEST(longest_way, find_longest_way_0_5)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 0, end = 5, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_longest_way(g, ways, way, end);
    //Then
    const int expected = 2223;
    ASSERT_EQUAL(expected, result);
}

CTEST(longest_way, find_longest_way_1_2)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 1, end = 2, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_longest_way(g, ways, way, end);
    //Then
    const int expected = 2317;
    ASSERT_EQUAL(expected, result);
}

CTEST(longest_way, find_longest_way_1_3)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 1, end = 3, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_longest_way(g, ways, way, end);
    //Then
    const int expected = 2685;
    ASSERT_EQUAL(expected, result);
}

CTEST(longest_way, find_longest_way_1_4)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 1, end = 4, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_longest_way(g, ways, way, end);
    //Then
    const int expected = 2603;
    ASSERT_EQUAL(expected, result);
}

CTEST(longest_way, find_longest_way_1_5)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 1, end = 5, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_longest_way(g, ways, way, end);
    //Then
    const int expected = 2157;
    ASSERT_EQUAL(expected, result);
}

CTEST(longest_way, find_longest_way_2_3)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 2, end = 3, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_longest_way(g, ways, way, end);
    //Then
    const int expected = 2264;
    ASSERT_EQUAL(expected, result);
}

CTEST(longest_way, find_longest_way_2_4)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 2, end = 4, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_longest_way(g, ways, way, end);
    //Then
    const int expected = 2722;
    ASSERT_EQUAL(expected, result);
}

CTEST(longest_way, find_longest_way_2_5)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 2, end = 5, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_longest_way(g, ways, way, end);
    //Then
    const int expected = 2517;
    ASSERT_EQUAL(expected, result);
}

CTEST(longest_way, find_longest_way_3_4)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 3, end = 4, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_longest_way(g, ways, way, end);
    //Then
    const int expected = 2559;
    ASSERT_EQUAL(expected, result);
}

CTEST(longest_way, find_longest_way_3_5)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 3, end = 5, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_longest_way(g, ways, way, end);
    //Then
    const int expected = 1998;
    ASSERT_EQUAL(expected, result);
}

CTEST(longest_way, find_longest_way_4_5)
{
    //Given
    struct graph* g = graph_create(V);
    graph_set(g);
    int start = 4, end = 5, way = 0;
    int ways[20][V];
    //When
    command_for_search(g, start, end, ways, &way);
    int result = print_longest_way(g, ways, way, end);
    //Then
    const int expected = 2272;
    ASSERT_EQUAL(expected, result);
}

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}