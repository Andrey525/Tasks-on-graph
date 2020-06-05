#include "main.h"

void printtown()
{
    printf("Список городов для поиска маршрута\n\n");
    printf("1.Новосибрск\n");
    printf("2.Омск\n");
    printf("3.Кемерово\n");
    printf("4.Томск\n");
    printf("5.Барнаул\n");
    printf("6.Красноярск\n");
}

void checklong(char* departure, char* arrival)
{
    int count1 = 0;
    int count2 = 0;
    count1 = strlen(departure);
    count2 = strlen(arrival);
    count1 = count1 / 2; //русские буквы кодируются 2 байтами,
    count2 = count2 / 2; //поэтому делим на 2.(кодировка unicode)

    while (count1 > 15) {
        printf("Вы ввели слишком длинное слово, повторите попытку!\n");
        departure = scanf_town_departure(departure);
        count1 = strlen(departure);
        count1 = count1 / 2;
    }

    while (count2 > 15) {
        printf("Вы ввели слишком длинное слово, повторите попытку\n");
        arrival = scanf_town_arrival(arrival);
        count2 = strlen(arrival);
        count2 = count2 / 2;
    }
}

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

// int main()
// {
//     char *departure, *arrival;
//     departure = malloc(sizeof(char) * 30);
//     arrival = malloc(sizeof(char) * 30);
//     departure = scanf_town_departure(departure);
//     arrival = scanf_town_arrival(arrival);
//     checklong(departure, arrival);
//     printf("Отправление: %s\n", departure);
//     printf("Прибытие: %s\n", arrival);
//     return 0;
// }