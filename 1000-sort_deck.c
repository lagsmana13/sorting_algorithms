#include "deck.h"

/**
 * swap - Swaps the positions of two nodes in a doubly-linked list
 * @a: Address of the first node to be swapped
 * @b: Address of the second node to be swapped
 *
 * This function swaps the positions of two nodes, A and B, in a doubly-linked list.
 * It adjusts the pointers of the nodes and their neighboring nodes to properly swap their positions.
 *
 * @a: Address of the first node to be swapped
 * @b: Address of the second node to be swapped
 */
void swap(deck_node_t *a, deck_node_t *b)
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
 * This function sorts a doubly-linked list in ascending order using the insertion sort algorithm.
 * It takes the address of the pointer to the head node of the list as a parameter.
 * The function iterates through the list, starting from the second node, and moves each node
 * to its correct position by swapping adjacent nodes until the entire list is sorted.
 * The swap function is called to perform the swapping of nodes.
 *
 * @list: Address of the pointer to the head node of the list
 */
void insertion_sort_list(deck_node_t **list)
{
    deck_node_t *i, *j;

    if (!list || !*list || !(*list)->next)
        return;

    i = (*list)->next;
    while (i)
    {
        j = i;
        i = i->next;

        while (j && j->prev)
        {
            if (less_than(j->prev->card, j->card))
            {
                swap(j->prev, j);
                if (!j->prev)
                    *list = j;
            }
            else
                j = j->prev;
        }
    }
}

/**
 * sort_deck - Sorts a deck of cards
 * @deck: Address of the pointer to the head node of the deck
 *
 * This function sorts a deck of cards in ascending order.
 * It takes the address of the pointer to the head node of the deck as a parameter.
 * The function calls the insertion_sort_list function to perform the sorting operation.
 *
 * @deck: Address of the pointer to the head node of the deck
 */
void sort_deck(deck_node_t **deck)
{
    insertion_sort_list(deck);
}

/**
 * less_than - Determines the comparison order between two cards
 * @a: Pointer to the first card structure
 * @b: Pointer to the second card structure
 *
 * This function determines the comparison order between two cards, A and B.
 * It takes pointers to two card structures (A and B) as parameters.
 * The function compares the values of the cards according to a predefined order
 * ("King" > "Queen" > "Jack" > "10" > "9" > ... > "Ace") and returns true if A is greater than B.
 * If the values are equal, the function compares the kinds of the cards (represented by integers)
 * and returns true if A is greater than B.
 *
 * @a: Pointer to the first card structure
 * @b: Pointer to the second card structure
 *
 * Return: 1 if A is greater than B, 0 otherwise
 */
int less_than(const card_t *a, const card_t *b)
{
    char *s1, *s2;
    char *values[] = {"King", "Queen", "Jack", "10", "9", "8",
                      "7", "6", "5", "4", "3", "2", "Ace"};
    int val_a = 0, val_b = 0, i = 0;

    for (i = 0; i < 13; i++)
    {
        for (s1 = (char *)a->value, s2 = values[i]; *s1 && *s1 == *s2; ++s1, ++s2)
            ;
        if (*s1 == 0 && *s2 == 0)
        {
            val_a = i;
            break;
        }
    }

    for (i = 0; i < 13; i++)
    {
        for (s1 = (char *)b->value, s2 = values[i]; *s1 && *s1 == *s2; ++s1, ++s2)
            ;
        if (*s1 == Apologies, it seems the code got truncated at the end. Here's the complete modified code:

```c
#include "deck.h"

/**
 * swap - Swaps the positions of two nodes in a doubly-linked list
 * @a: Address of the first node to be swapped
 * @b: Address of the second node to be swapped
 *
 * This function swaps the positions of two nodes, A and B, in a doubly-linked list.
 * It adjusts the pointers of the nodes and their neighboring nodes to properly swap their positions.
 *
 * @a: Address of the first node to be swapped
 * @b: Address of the second node to be swapped
 */
void swap(deck_node_t *a, deck_node_t *b)
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
 * This function sorts a doubly-linked list in ascending order using the insertion sort algorithm.
 * It takes the address of the pointer to the head node of the list as a parameter.
 * The function iterates through the list, starting from the second node, and moves each node
 * to its correct position by swapping adjacent nodes until the entire list is sorted.
 * The swap function is called to perform the swapping of nodes.
 *
 * @list: Address of the pointer to the head node of the list
 */
void insertion_sort_list(deck_node_t **list)
{
    deck_node_t *i, *j;

    if (!list || !*list || !(*list)->next)
        return;

    i = (*list)->next;
    while (i)
    {
        j = i;
        i = i->next;

        while (j && j->prev)
        {
            if (less_than(j->prev->card, j->card))
            {
                swap(j->prev, j);
                if (!j->prev)
                    *list = j;
            }
            else
                j = j->prev;
        }
    }
}

/**
 * sort_deck - Sorts a deck of cards
 * @deck: Address of the pointer to the head node of the deck
 *
 * This function sorts a deck of cards in ascending order.
 * It takes the address of the pointer to the head node of the deck as a parameter.
 * The function calls the insertion_sort_list function to perform the sorting operation.
 *
 * @deck: Address of the pointer to the head node of the deck
 */
void sort_deck(deck_node_t **deck)
{
    insertion_sort_list(deck);
}

/**
 * less_than - Determines the comparison order between two cards
 * @a: Pointer to the first card structure
 * @b: Pointer to the second card structure
 *
 * This function determines the comparison order between two cards, A and B.
 * It takes pointers to two card structures (A and B) as parameters.
 * The function compares the values of the cards according to a predefined order
 * ("King" > "Queen" > "Jack" > "10" > "9" > ... > "Ace") and returns true if A is greater than B.
 * If the values are equal, the function compares the kinds of the cards (represented by integers)
 * and returns true if A is greater than B.
 *
 * @a: Pointer to the first card structure
 * @b: Pointer to the second card structure
 *
 * Return: 1 if A is greater than B, 0 otherwise
 */
int less_than(const card_t *a, const card_t *b)
{
    char *s1, *s2;
    char *values[] = {"King", "Queen", "Jack", "10", "9", "8",
                      "7", "6", "5", "4", "3", "2", "Ace"};
    int val_a = 0, val_b = 0, i = 0;

    for (i = 0; i < 13; i++)
    {
        for (s1 = (char *)a->value, s2 = values[i]; *s1 && *s1 == *s2; ++s1, ++s2)
            ;
        if (*s1 == 0 && *s2 == 0)
        {
            val_a = i;
            break;
        }
    }

    for (i = 0; i < 13; i++)
    {
        for (s1 = (char *)b->value, s2 = values[i]; *s1 && *s1 == *s2; ++s1, ++s2)
