#include "sll.h"

int sl_delete_list(Slist **head)
{
	Slist*temp=*head;
    if(*head==NULL) //list is empty
    {
        //printf("List is empty\n");  
    return FAILURE;
    }
    while((*head)!=NULL)
    {
        temp=*head;
        *head=temp->link;
        free(temp);
        //sl_delete_first(head);
    }
}