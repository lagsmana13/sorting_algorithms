#include "sort.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 1, 0}; // The array to sort
    size_t n = sizeof(array) / sizeof(array[0]); // Number of elements in the array

    print_array(array, n); // Print the original array
    printf("\n");

    selection_sort(array, n); // Sort the array using selection sort

    printf("\n");
    print_array(array, n); // Print the sorted array

    return (0);
}
