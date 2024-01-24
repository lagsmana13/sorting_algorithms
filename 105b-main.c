#include "sort.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
    size_t n = 500;
    int *array = rand_array(n, 1000); // Generate a random array of size n with values up to 1000

    print_array(array, n); // Print the original array
    printf("\n");

    radix_sort(array, n); // Sort the array using radix sort

    printf("\n");
    print_array(array, n); // Print the sorted array

    check_array(array, n); // Check if the array is sorted correctly

    return (0);
}
