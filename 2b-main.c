#include "sort.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
    size_t n = 1001; // Number of elements in the array
    int *array = rand_array(n, 100); // Create a random array of size n with values up to 100

    print_array(array, n); // Print the original array
    printf("\n");

    selection_sort(array, n); // Sort the array using selection sort

    printf("\n");
    print_array(array, n); // Print the sorted array

    check_array(array, n); // Check if the array is sorted in ascending order

    return (0);
}
