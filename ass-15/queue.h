#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include<stdlib.h>

#define SUCCESS 1
#define FAILURE 0


typedef struct Que
{
    unsigned int capacity;
	int front, rear, count;
	int *item;
}Queue_t;
int create_queue(Queue_t *q, int);
int enqueue(Queue_t *, int);
int dequeue(Queue_t *);
int print_queue(Queue_t );
int IsQueueFull(Queue_t *q);
int IsQueueEmpty(Queue_t *q);

#endif