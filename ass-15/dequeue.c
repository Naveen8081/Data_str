#include "queue.h"

/* Function to deque the element */
int dequeue(Queue_t *q)
{
    if(IsQueueEmpty(q))
        return FAILURE;
    q-> front = (q-> front + 1) % q-> capacity; //find which index want to empty
    q-> count --; // we decrement the count as empty the queue
    return SUCCESS;
}