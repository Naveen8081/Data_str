#include"sll.h"

int reverse_recursion(Slist**head)
{
    if (*head==NULL) 
    {
        return LIST_EMPTY;
    }

    Slist *first=*head;//store 1st node in the list
    if(first->link==NULL)//if there is only one node
    {
        return SUCCESS;
    }
    Slist *rev=first->link;

    reverse_recursion(&rev);//recursive function call

    first->link->link=first;//update first link of link with first;
    first->link=NULL;//update first link with null
    
    *head=rev;//update the head pointer to the new first node(which is last node in the original node)
    return SUCCESS;
}