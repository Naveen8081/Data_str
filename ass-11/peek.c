#include "stack.h"

/* Function for display the top of the element in Stack */
int Peek(Stack_t *s)
{
	if(is_stack_empty(s))
	    return FAILURE;
	 else
	    
	    return s->item[s->top];
	    
}