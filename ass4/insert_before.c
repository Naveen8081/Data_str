#include "dll.h"

int dl_insert_before(Dlist **head, Dlist **tail, int gdata, int ndata)
{
    Dlist*temp=*head;
    Dlist*sec=NULL; // we store previous address so we take sec pointer
    if(*head==NULL)
        return LIST_EMPTY;
    Dlist*new=malloc(sizeof(Dlist));
        if(new==NULL)
            return FAILURE;
    new->prev=new->next=NULL;
    new->data=ndata; 
    while(temp!=NULL)
    {
        if(temp->data==gdata)
        {
            if(temp==*head) // if we have one nodes
            {
                *head=new; // head with new address
                new->next = temp; //new next with temp
                return SUCCESS;
            }
        else
        {
        new->prev=sec->next;//previous address is available in sec in next
        new->next=temp; // next node address
        temp->prev=new; // upadting new node address as temp 
        sec->next=new; //updating sec next with new 
        return SUCCESS;
        }
    }
            sec=temp;  
            temp=temp->next;
    }
    return DATA_NOT_FOUND;
}