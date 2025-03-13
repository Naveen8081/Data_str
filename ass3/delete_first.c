#include "dll.h"

int dl_delete_first(Dlist **head, Dlist **tail)
{
    Dlist *temp = *head;
    if (*head == NULL)
    {
        printf("List is empty\n");
        return FAILURE;
    }
    else
    {
        if (*head == *tail)
        {
            free(*head);
            *head = *tail = NULL;
        }
        else
        {
            temp = *head;
            *head = temp->next;
            free(temp);
            (*head)->prev = NULL;
            return SUCCESS;
        }
    }

}