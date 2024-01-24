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
    int array[] = {87, 65, 28, 63, 93, 52, 39, 59, 27, 30, 24, 83, 69, 62, 13, 6, 88, 58, 92, 26, 42, 11, 16, 21, 75, 36, 71, 8, 45, 38};
    size_t n = sizeof(array) / sizeof(array[0]); // Calculate the number of elements in the array

    print_array(array, n); // Print the original array
    printf("\n");

    quick_sort_hoare(array, n); // Sort the array using quicksort with Hoare partition scheme

    printf("\n");
    print_array(array, n); // Print the sorted array

    return (0);
}
