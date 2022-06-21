#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);

int binary_search(int *array, size_t size, int value);
int recursive_binary_search(int *array, int start, int end, int value);
void print_partial(int *array, int index, int end);

int advanced_binary(int *array, size_t size, int value);
int recursive_advanced(int *array, int start, int end, int value);
int first(int *array, int start, int end, int value);

#endif
