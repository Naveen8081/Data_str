#include "sll.h"

int sl_delete_last(Slist **head)
{
    if(*head==NULL) //list is empty
        {
          //printf("List is empty\n");  
        return FAILURE;
        }
    else    //list is not empty
    {
        Slist*temp=*head;
        Slist*prev=NULL;
        if((*head)->link==NULL)//if we have one node
        {
            *head=NULL;
            free(temp);
        }
        else
        {
            while(temp->link!=NULL)//if we have multiple nodes 
            {
                prev=temp;
                temp=temp->link;
            }
            prev->link=NULL;
            free(temp);
        }
    }
}