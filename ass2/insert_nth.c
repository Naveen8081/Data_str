#include "sll.h"

int sl_insert_nth(Slist **head, data_t data, data_t n)
{
    Slist*temp=*head;
    int count=1;
    Slist*prev=NULL;
    Slist*new=malloc(sizeof(Slist));
    if(new==NULL)
        return FAILURE;
    new->link=NULL;
    if( *head == NULL)
    {
        if(n==1)
        {
            new->data=data;
            new->link=*head;
            *head=new;
            return SUCCESS;
        }   
        return LIST_EMPTY;
    }
    if(n==1)
    {
        new->data=data;
        new->link=*head;
        *head=new;
        return SUCCESS;
    } 
    while(temp!=NULL)
    {
        if(count==n )
        {
            new->data=data;
            prev->link=new;
            new->link=temp;
            return SUCCESS;  
        }
        prev=temp;  
        temp=temp->link;
        count++;
        
    }
    if(count ==n)
    {
         new->data=data;
        prev->link=new;
        new->link=temp;
        return SUCCESS;
    }
    return POSITION_NOT_FOUND;
}