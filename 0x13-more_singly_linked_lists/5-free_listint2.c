#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: A pointer to a pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
    listint_t *current = *head;
    listint_t *next;

    while (current != NULL)
    {
        next = current->next; // Save the next pointer
        free(current); // Free the current node
        current = next; // Move to the next node
    }

    *head = NULL; // Set the head to NULL
}

