#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct listint_s - singly linked list node
 * @n: Integer stored in the node
 * @next: pointer to the next node in the list
 *
 * Description: singly linked list node structure
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - singly linked list with an express lane
 * @n: Integer stored in the node
 * @express: a pointer to next nnode in express lane
 * @next: ipointer to the next node in the list
 *
 *  Description: singly linked list node structure
 */

typedef struct skiplist_s
{
	int n;
	struct skiplist_s *express;
	struct skiplist_s *next;
} skiplist_t;


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_arr(int *array, size_t l, size_t r);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
void print_array(int *arr, int start, int end);
int rec_search(int *arr, int l, int r, int val);
int advanced_binary(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
void print_array(int *arr, int start, int end);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);


#endif
