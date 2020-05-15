
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* scanf_town_departure(char* departure)
{
    printf("Введите название города, откуда отправляетесь в путь: ");
    scanf("%s", departure);
    return departure;
}

char* scanf_town_arrival(char* arrival)
{
    printf("Введите название города, куда отправляетесь в путь: ");
    scanf("%s", arrival);
    return arrival;
}

int main()
{
    char *departure, *arrival;
    departure = malloc(sizeof(char) * 15);
    arrival = malloc(sizeof(char) * 15);
    departure = scanf_town_departure(departure);
    arrival = scanf_town_arrival(arrival);
    printf("Отправление: %s\n", departure);
    printf("Прибытие: %s\n", arrival);
    return 0;
}