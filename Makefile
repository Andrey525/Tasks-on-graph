all: bin/task_on_graph

longest-test: bin/longest-test

bin/task_on_graph: build/src/scanftown.o build/src/graph.o build/src/find_and_print_all_ways.o
	gcc -Wall -o bin/task_on_graph build/src/scanftown.o build/src/graph.o build/src/find_and_print_all_ways.o -lm
build/src/graph.o: src/graph.c
	gcc -Wall -Werror -o build/src/graph.o -c src/graph.c 
build/src/find_and_print_all_ways.o: src/find_and_print_all_ways.c
	gcc -Wall -Werror -o build/src/find_and_print_all_ways.o -c src/find_and_print_all_ways.c
build/src/scanftown.o: src/scanftown.c
	gcc -Wall -Werror -o build/src/scanftown.o -c src/scanftown.c
.PHONY: clean all

clean: 
	rm -rf build/src/* bin/* build/test/*

build/test/longest-test.o: test/longest-test.c
	gcc -std=c99 -I thirdparty -I src -c test/longest-test.c -o build/test/longest-test.o

bin/longest-test: build/test/longest-test.o build/src/graph.o build/src/scanftown.o build/src/find_and_print_all_ways.o
	gcc -Wall -Werror build/test/longest-test.o build/src/graph.o build/src/scanftown.o build/src/find_and_print_all_ways.o -lm -o bin/longest-test