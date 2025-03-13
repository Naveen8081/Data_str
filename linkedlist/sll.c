#include<stdio.h>
#include"sll.h"
int main()
{
	slist*head=NULL;
	int data,choice;
	char ch;
	do
	{
		printf("1. Insert at last\n2. Print_list\n3.Enter your choice: ");
		scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Enter the data to be inserted at last: ");
			scanf("%d",&data);
			if(insert_at_last(&head,data)==FAILURE)
			{
				printf("INFO: Insert at last failure\n");
			}
			else
				printf("INFO: Insert at last successfull\n");
			break;
		case 2:
			print_list(head);
			break;
		default:
			printf("INFO:Inavalid option\n");
	}
	printf("Do you want to continue (y/n)?: ");
	scanf(" %c",&ch);
	}while(ch!='n'||ch=='y');
}
