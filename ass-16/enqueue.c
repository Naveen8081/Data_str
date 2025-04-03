#include "queue.h"

int enqueue(Queue_t **front, Queue_t **rear, int data)
{
    Queue_t *new=malloc(sizeof(Queue_t));
    if(new == NULL)
    {
        return FAILURE;
    }
    new->data=data;
    new->link=NULL;
    if(*front == NULL && *rear == NULL)//if list was empty
    {
        *front=*rear=new; //update front and rear with new node address
        new->link=new; //upadte new link with new
        return SUCCESS;
    }
    else //if list was non empty
    {
        (*rear)->link=new;  //update rear link with new node
        new->link=*front;   //update new link with front
        *rear=new;          //update rear with new
    }
    return SUCCESS;
}