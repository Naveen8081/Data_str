#include "stack.h"

/* Function for Poping the element */
int Pop(Stack_t *s)
{	
	if(is_stack_empty(s))
	    return FAILURE;
	  else
	  {
	    s->top--;
	    return SUCCESS;
	  }
}