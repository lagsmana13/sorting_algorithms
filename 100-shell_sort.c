#include "sort.h"

/**
 * get_max_gap - Calculates the largest Knuth Sequence gap for the given size
 * @size: Size of the array
 *
 * This function calculates the largest gap size based on the Knuth Sequence
 * for the given array size. The Knuth Sequence is used to determine the sorting
 * increments in the shell sort algorithm.
 *
 * @size: Size of the array
 *
 * Return: The gap size
 */
size_t get_max_gap(size_t size)
{
    size_t n;

    n = 1;
    while (n < size)
        n = n * 3 + 1;
    return ((n - 1) / 3);
}

/**
 * shell_sort - Sorts an array of integers using the shell sort algorithm
 * @array: The integer array to be sorted
 * @size: Size of the array
 *
 * This function implements the shell sort algorithm to sort the given array
 * of integers in ascending order. It uses the Knuth Sequence to determine the
 * sorting increments and performs comparisons and swaps to rearrange the elements
 * in the array.
 *
 * @array: The integer array to be sorted
 * @size: Size of the array
 *
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
    size_t gap, i, j;
    int temp;

    if (!array || !size)
        return;

    for (gap = get_max_gap(size); gap; gap = (gap - 1) / 3)
    {
        for (i = gap; i < size; i++)
        {
            temp = array[i];
            for (j = i; j > gap - 1 && array[j - gap] > temp; j -= gap)
            {
                array[j] = array[j - gap];
            }
            array[j] = temp;
        }
        print_array(array, size);
    }
}
