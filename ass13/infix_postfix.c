#include "main.h"

int Infix_Postfix_conversion(char *Infix_exp, char *postfix_exp, Stack_t *stk)
{
	int j =0;
	for(int i = 0 ; i < Infix_exp[i] != '\0' ; i++ )
	{
		char ch = Infix_exp[i];
		if(isalnum(ch))
		{
			postfix_exp[j++]=ch; // if it is operand directly store into postfix array
		}
		else
		{
			if(stk->top == -1) // if it is stack empty push into stack
			{
				push(stk,ch);
			}
			else if(ch == '(')
			{
				push(stk,ch); // if it open paranthahis push into stack
			}
			else if(ch == ')') // if it is close paranthasis till open paranthesis pop into postfix array
			{
				while (!is_stack_empty(stk) && peek(stk) != '(')  // until stack empty pop the element into postfix array
				{
					postfix_exp[j++] = pop(stk);
				}
				pop(stk); // to discard ')'

			}
			else
			{
				while (!is_stack_empty(stk) && priority(peek(stk)) >= priority(ch))  // if available item stack opearator is higher and equal scaned operator  
				{
					postfix_exp[j++] = pop(stk);  // pop the stack available opeartor
				}
				push(stk,ch); // and push scanned operator into the stack
			
			}
		}
	}
	while(!is_stack_empty(stk))
	{
		postfix_exp[j++]= pop(stk); // till end of character reached means pop all the items into the postfix array
	}
	postfix_exp[j]= '\0'; // storing at last null char
	return 1;
}