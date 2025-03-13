#include "sll.h"

int sl_insert_after(Slist **head, data_t g_data, data_t ndata)
{
    if(*head==NULL)
    {
        return LIST_EMPTY;
    }
    Slist*temp=*head;
    while(temp!=NULL)
    {
        if(temp->data!=g_data)
        {
            temp=temp->link;
            //printf("%d\n",temp->link);
        }
        else
        {
            printf("*\n");
            Slist*new=malloc(sizeof(Slist));//if it is matched create a new node 
            if(new==NULL)
            {
                printf("Memory allocation is not done\n");
                return FAILURE;
            }
               
            else
            {
                printf("*\n");
                new->data=ndata;
                new->link=temp->link;
                temp->link=new;
                return SUCCESS;
            }
        }
    }
    //printf("Given data is not found\n");
    return DATA_NOT_FOUND;
}