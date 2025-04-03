#include "sll.h"

/* Function to create the loop */
int create_loop(Slist **head, data_t ndata)
{
    if(*head==NULL)
        return FAILURE;
    Slist*temp=*head;
    Slist*target=NULL;
    if(temp->data==ndata)
    {
        if(*head==temp) //if we have one node 
        {
            target=temp; //updating that particular address to target
        }
    }
    if(target!=NULL)
    {
        temp->link=target; //updating target address with temp link
        return SUCCESS;
    }
    while(temp->link!=NULL) //if we have multiple nodes
    {
        if(temp->data == ndata)
        {
          target=temp;
        }
        temp=temp->link;
    }
    if(target!=NULL)
    {
        temp->link=target;
        return SUCCESS;
    }
    if(temp->link==NULL) //if we create last node loop
    {
        if(temp->data == ndata)
        {
          target=temp;
        }
        if(target!=NULL)
        {
            temp->link=target;
            return SUCCESS;
        }
    }
    return DATA_NOT_FOUND;
}