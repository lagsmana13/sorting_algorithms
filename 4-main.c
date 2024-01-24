#include "sort.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7}; // The array to sort
    size_t n = sizeof(array) / sizeof(array[0]); // Number of elements in the array

    print_array(array, n); // Print the original array
    printf("\n");

    shell_sort(array, n); // Sort the array using shell sort

    printf("\n");
    print_array(array, n); // Print the sorted array

    return (0);
}
