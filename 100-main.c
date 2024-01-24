#include "sort.h"

/**
 * main - Entry point of the program
 *
 * This is the main function where the program starts its execution.
 * It demonstrates the usage of the shell sort algorithm by sorting an array of integers.
 * The original array is printed, then the array is sorted using the shell sort algorithm,
 * and the sorted array is printed again.
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    shell_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
