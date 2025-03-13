#include "main.h"

int priority(char opr)
{
	switch(opr)
	{
		case '+':
			return 1;
			break;
		case '-':
			return 1;
			break;
		case '*':
			return 2;
			break;
		case '/':
			return 2;
			break;
		default :
			return 0;
	}
}

void push(Stack_t *stk, char data)
{
	++(stk -> top);
	stk -> stack[stk -> top] = data;
}

int pop(Stack_t *stk)
{
	if (stk -> top != -1)
		return stk->stack[(stk->top)--];
	return -1;
}

int peek(Stack_t *stk)
{
	if (stk -> top != -1)
	{
		return stk -> stack[stk -> top];
	}
	return -1;
}
int is_stack_empty(Stack_t *s)
{
    if(s->top==-1)//if stack empty
    {
        return 1;
    }
    else 
    {
        return 0; //not empty
    }
}

