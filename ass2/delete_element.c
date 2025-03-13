#include "sll.h"

int sl_delete_element(Slist **head, data_t data)
{
    if (*head == NULL)
        return FAILURE;

    Slist *temp = *head, *prev = NULL;
    while (temp != NULL) //traverse through the nodes
    {
         if (temp->data == data) //if given data matches with present data
         {
            if(*head==temp) //if we have one nodes 
            {
            temp=*head; //update temp with head
            *head = temp->link; // update head with temp link(to remove the  first node) 
            free(temp);          //free the temp
            return SUCCESS;
            }
         }
        if(temp->data != data) //if we have multiple nodes
        {
            prev = temp;        //update with prev with temp
            temp = temp->link;  //update with temp with temp link
        }
        prev->link = temp->link; // matched means prev link with temp link
        free(temp); // free the present node 
        return SUCCESS;
    }
    return DATA_NOT_FOUND;

    
}
    
