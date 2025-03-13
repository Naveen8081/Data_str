#ifndef SLL_H
#define SLL_H

#include<stdio.h>
#include<stdlib.h>

#define SUCCESS 0
#define FAILURE -1

typedef struct node
{
    int data;
    struct node*link;
}slist;

int insert_at_last(slist**head,int data);
void print_list(slist*head);

#endif