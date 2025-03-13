#include "dll.h"

int dl_delete_list(Dlist **head, Dlist **tail)
{
    if(*head==NULL) //list is empty
    {
        //printf("List is empty\n");  
        return FAILURE;
    }
    while((*head)!=NULL)
    {
        dl_delete_first(head,tail);
    }
}