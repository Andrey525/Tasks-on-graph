#ifndef MAIN_H
#define MAIN_H

#include "graph.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

struct Tree {
    struct Tree* child[V];
    int parents[V];
    int name;
    int stat;
};

// find_and_print_all_ways.c
void sort_ways(int (*ways)[V], int way, int end);
void command_for_search(struct graph* g, int start, int end, int (*ways)[V], int* way);
void mat_to_zero(int (*mat)[V], int n, int k);
int print_shortest_way(struct graph* g, int (*ways)[V], int way, int end);
int print_longest_way(struct graph* g, int (*ways)[V], int way, int end);
void print_all_ways(struct graph* g, int (*ways)[V], int way, int end);
void find_num_of_ways(struct graph* g, struct Tree* tree, int parents[], int start, int end, int (*ways)[V], int* way);
int chek(int mass[], int a);
void init_node(struct Tree* tree, int name, int parents[]);
int check_for_exist(char* arg, char* name[V]);
// 
// scanftown.c
void checklong(char *departure, char *arrival);
char* scanf_town_departure(char* departure);
char* scanf_town_arrival(char* arrival);
void printtown();
// 
#endif