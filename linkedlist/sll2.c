#include"sll.h"
int insert_at_last(slist**head,int data)
{
    slist*new=malloc(sizeof(slist));
    if(new==NULL)
    {
        return FAILURE;
    }
    new->data=data;
    new->link=NULL;
    if(*head==NULL)
    {
        *head=new;
        return SUCCESS;
    }
    slist*temp=*head;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=new;
    return SUCCESS;
}
void print_list(slist*head)
{
    slist*temp=head;
	if(head==NULL)                                         	
    {
		printf("The list is empty\n");
		return ;
	}
    while(temp!=NULL)
    {
        printf("[%d]-> ",temp->data);
        temp=temp->link;
    }
	printf("NULL");
	printf("\n");
   
}
