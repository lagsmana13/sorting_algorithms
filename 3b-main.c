#include "sort.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
    size_t n = 101; // Number of elements in the array
    int *array = rand_array(n, 100); // Create a random array of size n with values up to 100

    print_array(array, n); // Print the original array
    printf("\n");

    quick_sort(array, n); // Sort the array using quicksort

    printf("\n");
    print_array(array, n); // Print the sorted array

    check_array(array, n); // Check if the array is sorted in ascending order

    return (0);
}
