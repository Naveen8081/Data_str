#include "sll.h"

//remove duplicate data's from list
int remove_duplicates( Slist **head )
{
    if(*head==NULL)
        return FAILURE;
    Slist *temp1=*head,*prev=*head,*temp2=(*head)->link;
    while(temp1 != NULL) //temp1 travel till null
    {
        prev=temp1; //update prev node with temp1
        temp2=temp1->link; //update temp2 with temp link that is next node
        while(temp2 != NULL)  //temp2 travel till end
        {
            if(temp1->data==temp2->data)  // while comparing temp1 data with next all nodes are available in the list
            {
                prev->link=temp2->link; // if the data matches,update prev node address with temp2 pointing next node address
                free(temp2); //frre the particular node
                temp2=prev->link; //update temp2 with prev link
            }
            else
            {
                prev=temp2; // if not matches traverse the next node
                temp2=temp2->link;
            }
        }
        temp1=temp1->link; // update the temp1 with temp link
    }
    return SUCCESS;
    
    
}