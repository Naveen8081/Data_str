#include "sll.h"

/* Function to reverse the given single linked list */
int reverse_iter(Slist **head) 
{ 
    if(*head == NULL)
    {
        //printf("$");
        return LIST_EMPTY;
    }
       Slist *cur=*head,*next=(*head)->link,*prev=NULL;
    while(cur != NULL) //cur travel till NULL
    {
        cur->link=prev; //update prev with cur link
        prev=cur; //update prev with cur
        cur=next;  //update cur with next
        if(next != NULL) //  update  next with next link
            next=next->link;
    }
     *head=prev; // lastly we update head with prev
     return SUCCESS;
} 