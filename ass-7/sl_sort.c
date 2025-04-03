#include "sll.h"

int sl_sort(Slist **head)
{
    if(*head == NULL)
        return LIST_EMPTY;
    Slist *temp=*head,*cur,*next,*prev;
    int size = 0;
    while( temp != NULL)
    {
        size++; //find the size of total list
        temp=temp -> link;
    }
    for(int i=0;i<size-1;i++)
    {
        cur=*head,next=(*head)->link,prev=NULL; //update every iteartion with those condition
        for(int j=0;j<size-1-i;j++)
        {
            if(cur->data > next->data)  //comparing current node data and next node data
            {
                if(prev == NULL) // it will have one node
                {
                    *head=next;
                }
                else // multiple node
                {
                    prev->link=next; //update prev link with next
                }
                cur->link=next->link;  //we changing the address cur link and next link
                next->link=cur;  // update next link with cur 
                prev=next; // after sorting update prev with next
                next=cur->link; // next will node pointing before so change cur link
            }
            else // if current data less than prev data
            {
                prev=cur;
                cur=next;
                next=next->link;
            }
        }
        
    }
    return SUCCESS;
}