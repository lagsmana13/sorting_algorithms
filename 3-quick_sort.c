#include "sort.h"

/**
 * swap - Swaps two integer values
 * @array: The integer array being sorted
 * @size: The size of the array
 * @a: Address of the first value
 * @b: Address of the second value
 *
 * Return: void
 */
void swap(int *array, size_t size, int *a, int *b)
{
    if (*a != *b)
    {
        *a = *a + *b;
        *b = *a - *b;
        *a = *a - *b;
        print_array((const int *)array, size);
    }
}

/**
 * lomuto_partition - Partitions the array using the Lomuto scheme
 * @array: The integer array being sorted
 * @size: The size of the array
 * @lo: The low index of the sort range
 * @hi: The high index of the sort range
 *
 * Return: The partition index
 */
size_t lomuto_partition(int *array, size_t size, ssize_t lo, ssize_t hi)
{
    int i, j, pivot = array[hi];

    for (i = j = lo; j < hi; j++)
    {
        if (array[j] < pivot)
        {
            swap(array, size, &array[j], &array[i]);
            i++;
        }
    }
    swap(array, size, &array[i], &array[hi]);

    return (i);
}

/**
 * quicksort - Recursive implementation of quicksort using the Lomuto scheme
 * @array: The integer array being sorted
 * @size: The size of the array
 * @lo: The low index of the sort range
 * @hi: The high index of the sort range
 *
 * Return: void
 */
void quicksort(int *array, size_t size, ssize_t lo, ssize_t hi)
{
    if (lo < hi)
    {
        size_t p = lomuto_partition(array, size, lo, hi);

        quicksort(array, size, lo, p - 1);
        quicksort(array, size, p + 1, hi);
    }
}

/**
 * quick_sort - Initiates the quicksort algorithm
 * @array: The integer array to be sorted
 * @size: The size of the array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
    if (!array || !size)
        return;
    quicksort(array, size, 0, size - 1);
}
