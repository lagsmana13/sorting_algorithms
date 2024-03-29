#include "sort.h"

/**
 * swap - Swaps two nodes in a doubly-linked list
 *
 * @a: Address of the first node
 * @b: Address of the second node
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
 * tail_traverse - Sorts from the tail back
 *
 * @head: Head of the list
 * @tail: Tail of the list
 * @list: Original head of the list
 *
 * Return: New head of the list
 */
listint_t *tail_traverse(listint_t *head, listint_t *tail, listint_t *list)
{
    while (tail && tail->prev)
    {
        if (tail->n < tail->prev->n)
        {
            swap(tail->prev, tail);
            if (tail->prev == NULL)
                list = tail;
            print_list(list);
        }
        else
            tail = tail->prev;
        if (tail->prev == NULL)
            head = tail;
    }
    return (head);
}

/**
 * cocktail_sort_list - Sorts a linked list using cocktail shaker sort
 *
 * @list: Doubly linked list to be sorted
 */
void cocktail_sort_list(listint_t **list)
{
    listint_t *tail, *head, *len;
    int i = 0, j = 0, swapped = 1;

    if (!list || !*list)
        return;
    len = *list;
    for (i = 0; len; i++)
    {
        len = len->next;
    }
    if (i < 2)
        return;
    head = *list;
    while (j < i)
    {
        swapped = 0;
        while (head && head->next)
        {
            if (head->n > head->next->n)
            {
                swap(head, head->next);
                swapped++;
                if (head->prev->prev == NULL)
                    *list = head->prev;
                print_list(*list);
            }
            else
                head = head->next;
            if (head->next == NULL)
                tail = head;
        }
        head = tail_traverse(head, tail, *list);
        *list = head;
        j++;
    }
}
