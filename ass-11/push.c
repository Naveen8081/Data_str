#include "stack.h"

/* Fuction for inserting the element */
int Push(Stack_t *s, int element)
{
	if(is_stack_full(s))
	{
	    return FAILURE;
	}
	 else
	 {
    	 s->top++;
    	 s->item[s->top]=element;
    	 return SUCCESS;
	 }
}
