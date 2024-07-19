#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers using Jump search.
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in list.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL if not found.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step, prev_index;
    listint_t *prev, *current;

    if (!list)
        return (NULL);

    step = sqrt(size);
    prev = list;
    current = list;

    while (current->next && current->index < size - 1 && current->n < value)
    {
        prev = current;
        prev_index = current->index;
        for (size_t i = 0; i < step && current->next; i++)
            current = current->next;
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev_index, current->index);

    while (prev && prev->index <= current->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return (prev);
        prev = prev->next;
    }

    return (NULL);
}
