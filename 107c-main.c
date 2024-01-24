#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
    size_t n = 101; // Number of elements in the array
    int *array = rand_array(n, 1000); // Create a random array of size n with values up to 1000

    print_array(array, n); // Print the original array
    printf("\n");

    quick_sort_hoare(array, n); // Sort the array using quicksort with Hoare partition scheme

    printf("\n");
    print_array(array, n); // Print the sorted array

    check_array(array, n); // Check if the array is sorted in ascending order

    return (0);
}
