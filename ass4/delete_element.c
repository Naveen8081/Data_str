#include "dll.h"

int dl_delete_element(Dlist **head, Dlist **tail, int data)
{	
    if (*head == NULL)
        return LIST_EMPTY;

    Dlist *temp = *head, *sec = NULL;
    while (temp != NULL) //traverse through the nodes
    {
         if (temp->data == data) //if given data matches with present data
         {
            if(*head==*tail) //if we have one nodes 
            {
                 free(*head);
                *head =*tail=NULL; // update head (to remove the  first node) 
                 return SUCCESS;
            }
            sec->next = temp->next; // matched means prev link with temp next
            temp->next->prev=sec->next; //we are next node address with temp next
            printf("%d\n",temp->data);
            free(temp); // free the present node 
            return SUCCESS;
         }
            
            sec = temp;        //update with prev with temp
            temp = temp->next;  //update with temp with temp next
        
        
    }
    return DATA_NOT_FOUND;
}