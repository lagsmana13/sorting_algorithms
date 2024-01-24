#include "sort.h"

/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
    listint_t *list;
    listint_t *node;
    int *tmp;

    list = NULL;

    while (size--)
    {
        node = malloc(sizeof(*node));
        if (!node)
            return (NULL);

        tmp = (int *)&node->n;
        *tmp = array[size];

        node->next = list;
        node->prev = NULL;
        list = node;

        if (list->next)
            list->next->prev = list;
    }

    return (list);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
    listint_t *list;
    int *array;
    size_t n = 101;

    array = rand_array(n, 0);
    list = create_listint(array, n);

    if (!list)
        return (1);

    print_list(list);
    printf("\n");

    insertion_sort_list(&list);

    printf("\n");
    print_list(list);
    check_list(list);

    return (0);
}
