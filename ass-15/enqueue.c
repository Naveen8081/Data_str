#include "queue.h"

/* Function to Insert the element */
int enqueue(Queue_t *q, int data)
{
    if(IsQueueFull(q))
        return FAILURE;
    if(q->front == -1) //we have to make it front as 0
    {
        //printf("*\n");
        q->front = 0;
        q->rear = (q-> rear + 1) % q->capacity; // find which index we want to update the data
        q->item [q-> rear] = data; //update the data at particular index 
        q->count++;
    }
    else
    {
        q->rear = (q-> rear + 1) % q->capacity; //find which index we want to update
        q->item [q-> rear] = data;
        q->count ++; //whenever we update the data increment the count
        return SUCCESS;
    }
}