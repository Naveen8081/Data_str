#include "dll.h"

int dl_delete_last(Dlist **head, Dlist **tail)
{
    Dlist*temp=*tail;
    if (*head == NULL)
    {
        printf("List is empty\n");
        return FAILURE;
    }
    else
    {
        if(*head==*tail)//if we have one nodes only
        {
            free(*head);
            *head=*tail=NULL;
        }
        else //if we have multiple nodes
        {
            temp=*tail;
            *tail=temp->prev;
            free(temp);
            (*tail)->next=NULL;
            return SUCCESS;
        }
    }
    

}