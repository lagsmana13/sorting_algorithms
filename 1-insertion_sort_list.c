#include "sort.h"

/**
 * swap - Swaps two nodes in a doubly-linked list
 * @a: Address of the first node
 * @b: Address of the second node
 *
 * This function swaps the positions of two nodes in a doubly-linked list
 * by adjusting the necessary pointers.
 *
 * @a: Pointer to the first node to be swapped
 * @b: Pointer to the second node to be swapped
 *
 * Return: void
 */
void swap(listint_t *a, listint_t *b)
{
    if (a->prev)
        a->prev->next = b;
    if (b->next)
        b->next->prev = a;
    a->next = b->next;
    b->prev = a->prev;
    a->prev = b;
    b->next = a;
}

/**
 * insertion_sort_list - Sorts a doubly-linked list using the insertion sort algorithm
 * @list: Address of the pointer to the head node of the list
 *
 * This function sorts a doubly-linked list in ascending order using the
 * insertion sort algorithm. It adjusts the necessary pointers to rearrange
 * the nodes based on their values.
 *
 * @list: Double pointer to the head node of the list
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *i, *j;

    if (!list || !*list || !(*list)->next)
        return;

    i = (*list)->next;
    while (i)
    {
        j = i;
        i = i->next;
        while (j && j->prev)
        {
            if (j->prev->n > j->n)
            {
                swap(j->prev, j);
                if (!j->prev)
                    *list = j;
                print_list((const listint_t *)*list);
            }
            else
                j = j->prev;
        }
    }
}
