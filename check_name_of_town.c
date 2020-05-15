#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define V 6

int check_for_exist(char* arg, char* name[V])
{
    for (int i = 0; i < V; i++) {
        if (!strcmp(name[i], arg)) {
            return i;
        }
    }
    return -1;
}

int main()
{
    char* name[V];
    for (int i = 0; i < V; ++i) {
        name[i] = malloc(15);
    }
    strcpy(name[0], "Новосибирск");
    strcpy(name[1], "Омск");
    strcpy(name[2], "Кемерово");
    strcpy(name[3], "Томск");
    strcpy(name[4], "Барнаул");
    strcpy(name[5], "Красноярск");
    char str[] = "Омск";
    char str1[] = "Ом";
    if (check_for_exist(str, name) != -1) {
        printf("%s\n", name[check_for_exist(str, name)]);
    } else {
        printf("Этого города нет\n");
    }
    if (check_for_exist(str1, name) != -1) {
        printf("%s\n", name[check_for_exist(str, name)]);
    } else {
        printf("Этого города нет\n");
    }
}