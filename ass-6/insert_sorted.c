#include "sll.h"

/* Function for insert the number in sorted linked list */
int insert_sorted( Slist **head, data_t data) 
{ 
    Slist*temp=*head,*prev=NULL;
    Slist*new=malloc(sizeof(Slist));
    if(new==NULL)
        return LIST_EMPTY;
    new->data=data;
    new->link=NULL;
    if(*head==NULL) //if no nodes are available
    {
        *head=new;
        return SUCCESS;
    }
    while(temp!=NULL) //if we have multiple nodes
    {
        if(temp->data>=data)
        { 
            if(prev==NULL) //if one nodes is available
            {
                *head=new;
                new->link=temp;
                return SUCCESS;
            }
            else // multiple nodes are available
            {
                prev->link=new;
                new->link=temp;
                return SUCCESS;
            }
        }
        prev=temp; //we took prev pointer that updating current temp address
        temp=temp->link;
    }
    prev->link=new;//last node upadte
    return SUCCESS;
} 