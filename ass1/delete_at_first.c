#include "sll.h"

int sl_delete_first(Slist **head)
{
    Slist*temp=*head;
    if(*head==NULL) //list is empty
    {
    //printf("List is empty\n");  
    return FAILURE;
    }
    *head=temp->link;
    free(temp);

}