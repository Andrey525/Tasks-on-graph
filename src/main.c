#include "main.h"

int main()
{
	int first = 1, second = 1;
	char arrival[20];
	char departure[20];
	struct graph* g = graph_create(V);
    graph_set(g);
	printf("\nДобро пожаловать в программу Routes Between Cities.\n");
	while(first) {
		second = 1;
		printf("\nВыберите два города из списка. Города обязательно должны быть разными!\n");
		printtown();
		printf("\n");
		scanf_town_departure(departure);
		scanf_town_arrival(arrival);
		while (check_for_exist(arrival, g->name) == -1 || check_for_exist(departure, g->name) == -1) {
			if (check_for_exist(arrival, g->name) == -1 && check_for_exist(departure, g->name) > -1) {
				printf("Город отправки %s отсутствует в списке городов программы.\n", arrival);
				for (int i = 0; i < 20; i++) {
					arrival[i] = '\0';
				}
			} else if (check_for_exist(arrival, g->name) > -1 && check_for_exist(departure, g->name) == -1) {
				printf("Город прибытия %s отсутствует в списке городов программы.\n", departure);
				for (int i = 0; i < 20; i++) {
					departure[i] = '\0';
				}
			} else if (check_for_exist(arrival, g->name) == -1 && check_for_exist(departure, g->name) == -1) {
				printf("Оба города отсутствуют в списке городов программы.\n");
				for (int i = 0; i < 20; i++) {
					arrival[i] = '\0';
					departure[i] = '\0';
				}
			}
			if (check_for_exist(departure, g->name) == -1) {
				scanf_town_departure(departure);
			}
			if (check_for_exist(arrival, g->name) == -1) {
				scanf_town_arrival(arrival);
			}
			checklong(arrival, departure);
		}
    	int start = check_for_exist(departure, g->name), end = check_for_exist(arrival, g->name), way = 0;
    	int ways[20][V];
    	char* answers[13];
    	char ans[45];
    	for (int i = 0; i <= 13; i++) {
       		answers[i] = malloc(sizeof(char) * 90);
    	}
    	strcpy(answers[0], "Кратчайший маршрут\n");
    	strcpy(answers[1], "Длиннейший маршрут\n");
    	strcpy(answers[2], "Количество всех маршрутов\n");
		strcpy(answers[3], "Полная информация о маршруте\n");
		strcpy(answers[4], "Выбор других городов\n");
		strcpy(answers[5], "Выход из программы\n");
		strcpy(answers[6], "1\n");
		strcpy(answers[7], "2\n");
		strcpy(answers[8], "3\n");
		strcpy(answers[9], "4\n");
		strcpy(answers[10], "5\n");
		strcpy(answers[11], "6\n");
		strcpy(answers[12], "да");
		strcpy(answers[13], "д");

		char bin;
		scanf("%c", &bin);
		while (second) {	
			printf("\nСписок функций:\n\n");
			for (int i = 0; i < 6; i++) {
				printf("%d) %s", i + 1, answers[i]);
			}
	    	printf("\nВведите номер или название выбранной функции из данного списка: ");
		    fgets(ans, 90, stdin);
	    	if (check_for_exist(ans, answers) == 0 || !strcmp(ans, answers[6])) {
	    		command_for_search(g, start, end, ways, &way);
	    		printf("\n");
	    		print_shortest_way(g, ways, way, end);
	    		way = 0;
	    	} else if (check_for_exist(ans, answers) == 1 || !strcmp(ans, answers[7])) {
	    		command_for_search(g, start, end, ways, &way);
	    		printf("\n");
	    		print_longest_way(g, ways, way, end);
	    		way = 0;
	    	} else if (check_for_exist(ans, answers) == 2 || !strcmp(ans, answers[8])) {
	    		command_for_search(g, start, end, ways, &way);
	    		printf("\n");
	    		print_all_ways(g, ways, way, end);
	    		way = 0;
	    	} else if (check_for_exist(ans, answers) == 3 || !strcmp(ans, answers[9])) {
	    		command_for_search(g, start, end, ways, &way);
	    		printf("\n");
	    		print_all_ways(g, ways, way, end);
	    		printf("\n");
	    		print_shortest_way(g, ways, way, end);
	    		printf("\n");
	    		print_longest_way(g, ways, way, end);
	    		way = 0;
	    	} else if (check_for_exist(ans, answers) == 4 || !strcmp(ans, answers[10])) {
	    		second = 0;
	    	} else if (check_for_exist(ans, answers) == 5 || !strcmp(ans, answers[11])) {
	    		printf("\nВы точно хотите выйти [да][нет]: ");
	    		scanf("%s", ans);
	    		scanf("%c", &bin);
	    		if (!strcmp(answers[12], ans) || !strcmp(answers[13], ans)) {
	    			printf("\nСпасибо за пользование нашим сервисом!\n");
	    			_Exit(EXIT_SUCCESS);
	    		} 
	    	} else {
    			printf("\nНеправильный ввод имени или номера функции.\n");
	    	}
	    }
	}
}