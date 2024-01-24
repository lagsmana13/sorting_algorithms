#ifndef _SORT_H_
#define _SORT_H_
#include <stddef.h>

/**
 * struct listint_s - Node of a doubly linked list
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size); // Sorts an array using the bubble sort algorithm
void insertion_sort_list(listint_t **list); // Sorts a doubly linked list using the insertion sort algorithm
void selection_sort(int *array, size_t size); // Sorts an array using the selection sort algorithm
void quick_sort(int *array, size_t size); // Sorts an array using the quick sort algorithm
void shell_sort(int *array, size_t size); // Sorts an array using the shell sort algorithm
void quick_sort_hoare(int *array, size_t size); // Sorts an array using the quick sort (Hoare partition scheme) algorithm
void counting_sort(int *array, size_t size); // Sorts an array using the counting sort algorithm
void cocktail_sort_list(listint_t **list); // Sorts a doubly linked list using the cocktail sort algorithm
void merge_sort(int *array, size_t size); // Sorts an array using the merge sort algorithm
void heap_sort(int *array, size_t size); // Sorts an array using the heap sort algorithm
void radix_sort(int *array, size_t size); // Sorts an array using the radix sort algorithm
void bitonic_sort(int *array, size_t size); // Sorts an array using the bitonic sort algorithm

#endif
