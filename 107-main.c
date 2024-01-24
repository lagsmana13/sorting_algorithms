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
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]); // Calculate the number of elements in the array

    print_array(array, n); // Print the original array
    printf("\n");

    quick_sort_hoare(array, n); // Sort the array using quicksort with Hoare partition scheme

    printf("\n");
    print_array(array, n); // Print the sorted array

    return (0);
}
