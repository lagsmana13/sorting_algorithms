#include "sort.h"

/**
 * swap - Swaps two integer values
 * @array: The integer array to sort
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
    }
    print_array((const int *)array, size);
}

/**
 * hoare_partition - Partitions the array using the Hoare partition scheme
 * @array: The integer array to sort
 * @size: The size of the array
 * @lo: The low index of the sort range
 * @hi: The high index of the sort range
 *
 * Return: The index of the partition
 */
size_t hoare_partition(int *array, ssize_t size, ssize_t lo, ssize_t hi)
{
    ssize_t i = lo - 1, j = hi + 1;
    int pivot = array[hi];

    while (i < size)
    {
        while (array[++i] < pivot)
            ;
        while (array[--j] > pivot)
            ;
        if (i < j)
            swap(array, size, &array[i], &array[j]);
        else if (i >= j)
            break;
    }
    return (i);
}

/**
 * quicksort - Sorts the array using the quicksort algorithm with the Hoare partition scheme
 * @array: The integer array to sort
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
        size_t p = hoare_partition(array, size, lo, hi);

        quicksort(array, size, lo, p - 1);
        quicksort(array, size, p, hi);
    }
}

/**
 * quick_sort_hoare - Sorts the array using quicksort with the Hoare partition scheme
 * @array: The integer array to sort
 * @size: The size of the array
 *
 * Return: void
 */
void quick_sort_hoare(int *array, size_t size)
{
    if (!array || size < 2)
        return;
    quicksort(array, size, 0, size - 1);
}
