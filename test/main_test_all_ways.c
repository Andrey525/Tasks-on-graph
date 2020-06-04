#define CTEST_MAIN

#include "main.h"
#include "ctest.h"

CTEST(check_quontity, CORRECT_NUM_BTW_0_1)
{
	struct graph* g = graph_create(V);
	graph_set(g);
	int way = 0;
	int ways[20][V];
	command_for_search(g, 0, 1, ways, &way);
    int result = way;
    way = 0;
    int expected = 8;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_quontity, CORRECT_NUM_BTW_0_2)
{
	struct graph* g = graph_create(V);
	graph_set(g);
	int way = 0;
	int ways[20][V];
	command_for_search(g, 0, 2, ways, &way);
    int result = way;
    way = 0;
    int expected = 8;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_quontity, CORRECT_NUM_BTW_0_3)
{
	struct graph* g = graph_create(V);
	graph_set(g);
	int way = 0;
	int ways[20][V];
	command_for_search(g, 0, 3, ways, &way);
    int result = way;
    way = 0;
    int expected = 8;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_quontity, CORRECT_NUM_BTW_0_4)
{
	struct graph* g = graph_create(V);
	graph_set(g);
	int way = 0;
	int ways[20][V];
	command_for_search(g, 0, 4, ways, &way);
    int result = way;
    way = 0;
    int expected = 9;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_quontity, CORRECT_NUM_BTW_0_5)
{
	struct graph* g = graph_create(V);
	graph_set(g);
	int way = 0;
	int ways[20][V];
	command_for_search(g, 0, 5, ways, &way);
    int result = way;
    way = 0;
    int expected = 8;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_quontity, CORRECT_NUM_BTW_1_2)
{
	struct graph* g = graph_create(V);
	graph_set(g);
	int way = 0;
	int ways[20][V];
	command_for_search(g, 1, 2, ways, &way);
    int result = way;
    way = 0;
    int expected = 13;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_quontity, CORRECT_NUM_BTW_1_3)
{
	struct graph* g = graph_create(V);
	graph_set(g);
	int way = 0;
	int ways[20][V];
	command_for_search(g, 1, 3, ways, &way);
    int result = way;
    way = 0;
    int expected = 8;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_quontity, CORRECT_NUM_BTW_1_4)
{
	struct graph* g = graph_create(V);
	graph_set(g);
	int way = 0;
	int ways[20][V];
	command_for_search(g, 1, 4, ways, &way);
    int result = way;
    way = 0;
    int expected = 14;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_quontity, CORRECT_NUM_BTW_1_5)
{
	struct graph* g = graph_create(V);
	graph_set(g);
	int way = 0;
	int ways[20][V];
	command_for_search(g, 1, 5, ways, &way);
    int result = way;
    way = 0;
    int expected = 16;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_quontity, CORRECT_NUM_BTW_2_3)
{
	struct graph* g = graph_create(V);
	graph_set(g);
	int way = 0;
	int ways[20][V];
	command_for_search(g, 2, 3, ways, &way);
    int result = way;
    way = 0;
    int expected = 10;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_quontity, CORRECT_NUM_BTW_2_4)
{
	struct graph* g = graph_create(V);
	graph_set(g);
	int way = 0;
	int ways[20][V];
	command_for_search(g, 2, 4, ways, &way);
    int result = way;
    way = 0;
    int expected = 10;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_quontity, CORRECT_NUM_BTW_2_5)
{
	struct graph* g = graph_create(V);
	graph_set(g);
	int way = 0;
	int ways[20][V];
	command_for_search(g, 2, 5, ways, &way);
    int result = way;
    way = 0;
    int expected = 8;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_quontity, CORRECT_NUM_BTW_3_4)
{
	struct graph* g = graph_create(V);
	graph_set(g);
	int way = 0;
	int ways[20][V];
	command_for_search(g, 3, 4, ways, &way);
    int result = way;
    way = 0;
    int expected = 10;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_quontity, CORRECT_NUM_BTW_3_5)
{
	struct graph* g = graph_create(V);
	graph_set(g);
	int way = 0;
	int ways[20][V];
	command_for_search(g, 3, 5, ways, &way);
    int result = way;
    way = 0;
    int expected = 13;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_quontity, CORRECT_NUM_BTW_4_5)
{
	struct graph* g = graph_create(V);
	graph_set(g);
	int way = 0;
	int ways[20][V];
	command_for_search(g, 4, 5, ways, &way);
    int result = way;
    way = 0;
    int expected = 14;
    ASSERT_EQUAL(expected, result);
}
int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}