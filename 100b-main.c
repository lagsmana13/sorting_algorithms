#include "sort.h"

/**
 * main - Entry point for the program
 *
 * Return: Always 0
 */
int main(void)
{
    size_t n = 10;  // Number of elements in the array
    int *array = rand_array(n, 0);  // Generate a random array

    print_array(array, n);  // Print the original array
    printf("\n");
    shell_sort(array, n);  // Sort the array using shell sort
    printf("\n");
    print_array(array, n);  // Print the sorted array
    check_array(array, n);  // Check if the array is sorted correctly
    return (0);
}
