#include "sll.h"

int find_node(Slist *head, data_t data)
{
	Slist*temp=head;
    int pos=1;
    if(head==NULL)
        return FAILURE;
    else
    {
        while(temp!=NULL)
        {
            if(temp->data==data)
                return pos;
            else
            {
                temp=temp->link;
                pos++;
            }
        }
        return FAILURE;//incase given data is not present in the list 
    }
}
