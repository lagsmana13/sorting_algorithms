#include "sort.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n); // Print the original array
    printf("\n");

    radix_sort(array, n); // Sort the array using radix sort

    printf("\n");
    print_array(array, n); // Print the sorted array

    return (0);
}
