#include "sll.h"

int sorted_merge( Slist **head1, Slist **head2)
{
    if(*head1 == NULL && *head2 == NULL) //if both list are empty
        return LIST_EMPTY;
    if(*head1 != NULL && *head2 == NULL) //if first list non empty and second list empty
    {
        sort( head1);
        return SUCCESS;
    }
    if( *head1 == NULL && *head2 != NULL) //if the first list empty and second non empty
    {
        *head1 = *head2; //update head1 with head2
        *head2 = NULL; //update head2 with null
         sort(head1);
         return SUCCESS;
    }
    if( *head1 != NULL && *head2 != NULL) //if both are not empty
    {
        Slist *temp=*head1;
        while(temp->link != NULL) //we need find last node
        {
            temp=temp->link;
        }
        temp->link=*head2; //update last node address with head2
        *head2 = NULL; //make it as head2 null
        sort(head1);
        return SUCCESS;
    }
}