#include "sll.h"

int sl_insert_before(Slist **head, data_t g_data, data_t ndata)
{
    Slist *temp = malloc(sizeof(Slist));
    Slist *new = malloc(sizeof(Slist));
    Slist *prev = NULL;
    new->data = ndata;
    new->link = NULL;
    temp = *head;
    if (*head == NULL)
        return LIST_EMPTY;
    else
    {
        while (temp != NULL)
        {
            if (temp->data == g_data)
            {
                if (prev == NULL)
                {
                    *head = new;
                    new->link = temp;
                    return SUCCESS;
                }
                prev->link = new;
                new->link = temp;
                return SUCCESS;
            }
            else
            {
                prev = temp;
                temp = temp->link;
            }
        }
    }
    return DATA_NOT_FOUND;
}
