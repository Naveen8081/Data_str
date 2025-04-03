#include "sll.h"

/* Function for finding the loop in the link */
int find_loop(Slist *head)
{
    if(head==NULL)
        return LIST_EMPTY;
    Slist *fast=head, *slow=head;
    
    while(fast!=NULL && fast->link!= NULL) // checking last node and last node address
    {
        fast=fast->link->link;  //updating mid of the list
        slow=slow->link; //updating mid half of the list
        if(fast==slow) //when fast and slow meet together 
            return SUCCESS;
    }
    return LOOP_NOT_FOUND;
}