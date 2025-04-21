#include "queue.h"

int IsQueueFull(Queue_t *q)
{
    printf("count : %d size :%d\n",q->count,q->capacity);
    if(q-> capacity == q-> count-1)
        return SUCCESS;
    else
        return FAILURE;
}

int IsQueueEmpty(Queue_t *q)
{
   if(q->count == 0)
    return SUCCESS;
    else
        return FAILURE;
}