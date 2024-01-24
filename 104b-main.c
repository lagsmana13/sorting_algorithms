#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    size_t n = 11;
    int *array = rand_array(n, 100); // Generate a random array of size n with values up to 100
    print_array(array, n); // Print the original array
    printf("\n");
    
    heap_sort(array, n); // Sort the array using heap sort
    
    printf("\n");
    print_array(array, n); // Print the sorted array
    
    check_array(array, n); // Check if the array is sorted correctly
    
    return (0);
}
