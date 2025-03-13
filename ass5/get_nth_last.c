#include "sll.h"
/* Function to get the nth node from the last of a linked list*/
int find_nth_last(Slist *head, int pos, int *data) 
{ 
    Slist*first=head;
    Slist*second=head;
    if(head==NULL)
        return LIST_EMPTY;
    int count=0;
    while(count<pos)
    {
        first=first->link;
        count++;
    }
    while(first!=NULL)
    {
        first=first->link;
        second=second->link;
        *data=second->data;
    }
    return SUCCESS;
} 