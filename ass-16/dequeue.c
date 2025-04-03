#include "queue.h"

int dequeue(Queue_t **front, Queue_t **rear)
{
    Queue_t *temp=*front;
    if(*front== NULL)
        return FAILURE;
    if(*front == *rear) // if we have one node make it as null 
    { 
        *front=*rear=NULL;
        free(temp); //free the temp
        return SUCCESS;
    }
    *front=(*front)->link; //update front with front link
    free(temp); 
    (*rear)->link=*front; ////update first node address as last link part
    return SUCCESS;
}